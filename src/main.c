#include "../include/predef.h"
int main()
{	
	/*
	* DECLARAÇÃO DE VARIÁVEIS
	*/

	int i = 0;
	char path[256];
	char* str;
	token_t terminator;
	FILE *lexical, *syntactic, *semantic;
	stack_t stack;
	queue_t queue;
	tree_t tree;

	/*
	* ETAPA DE ANÁLISE LÉXICA
	*/

	printf("Digite o nome do arquivo a ser analisado: ");
	scanf("%s", path);
	str = read_file(path);
	if(str == NULL) 
	{
		printf("Erro de leitura do arquivo\n");
		return 1;
	}
	lexical = fopen("lexical.txt", "wb");	
	init_queue(&queue);
	while(str[i])
	{
		token_t* lex = query_automata(&i, str);
		if(lex == NULL) break;
		
		push_queue(queue, lex);
		if(lex -> error) break;
	}
	free(str);
	if(fprint_token_queue(lexical, queue))
	{
		printf("Erro lexico detectado, olhe o arquivo lexical.txt");
		return 2;
	}
	printf("Analise lexica concluida com sucesso.\r\n");

	/*
	* ETAPA DE ANÁLISE SINTÁTICA
	*/
	syntactic = fopen("syntactical.txt", "wb");
	terminator.token_id=0;
	push_queue(queue, &terminator);
	init_stack(&stack);
	init_tree(&tree, (char *)token_to_string(51));
	push_stack(&stack, 0);
	push_stack(&stack, 51);
	fprintf(syntactic, "Pilha: ");
	fprint_stack(syntactic, stack);
	fprintf(syntactic, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)queue->item)->token_id));
	fprintf(syntactic, "Acao: Empilha simbolo inicial\r\n\r\n");
	while(1)
	{
		unsigned short stack_tokenID = stack->item;
		unsigned short code_tokenID = ((token_t*)queue->item)->token_id;	
		unsigned short ruleID = fetch_rule(stack_tokenID, code_tokenID);
		const char* tok;
		if(stack_tokenID == code_tokenID)
		{
			
			if(stack_tokenID == 0)
			{
				fprintf(syntactic, "Pilha: ");
				fprint_stack(syntactic, stack);
				fprintf(syntactic, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)queue->item)->token_id));
				fprintf(syntactic, "Acao: Analise sintatica finalizada com sucesso.");
				free_stack(stack);
				free_queue(queue);
				break;
			}
			pop_stack(&stack);
			tree->string = ((token_t*)(queue->item))->string;
			tree = stepback_tree(tree);
			tok = token_to_string(((token_t*)queue->item)->token_id);
			free_token(queue->item);
			pop_queue(queue);
			fprintf(syntactic, "Pilha: ");
			fprint_stack(syntactic, stack);
			fprintf(syntactic, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)queue->item)->token_id));
			fprintf(syntactic, "Acao: Desempilha simbolo identificado [ %s ]. Avanca entrada.\r\n\r\n", tok);
			continue;
		}
		else if(stack_tokenID == 0 || code_tokenID == 0 || ruleID == 0)
		{
			fprintf(syntactic, "Pilha: ");
			fprint_stack(syntactic, stack);
			fprintf(syntactic, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)queue->item)->token_id));
			if(stack_tokenID == 0) fprintf(syntactic, "Acao: Erro sintatico. A pilha gramatical chegou ao fim antes da entrada.\r\n\r\n");
			else if(code_tokenID == 0) fprintf(syntactic, "Acao: Erro sintatico. O codigo de entrada chegou ao fim antes da pilha gramatical.\r\n\r\n");
			else fprintf(syntactic, "Acao: Erro sintatico. Nao existem producoes para esse estado.");
			printf("Erro sintatico detectado, olhe o arquivo syntactical.txt");
			return 3;
		}
		tok = token_to_string(stack->item);
		pop_stack(&stack);
		push_rule_into_stack(&stack, ruleID);
		push_rule_into_tree(tree, ruleID);
		tree = forward_tree(tree, 0);
		if(stack->item == 17)
		{
			pop_stack(&stack);
			tree = stepback_tree(tree);
			fprintf(syntactic, "Pilha: ");
			fprint_stack(syntactic, stack);
			fprintf(syntactic, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)queue->item)->token_id));
			fprintf(syntactic, "Acao: Desempilha simbolo [ %s ], producao nula na regra %i.\r\n\r\n", tok, ruleID);
		}
		else
		{
			fprintf(syntactic, "Pilha: ");
			fprint_stack(syntactic, stack);
			fprintf(syntactic, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)queue->item)->token_id));
			fprintf(syntactic, "Acao: Desempilha simbolo [ %s ] e empilha regra %i.\r\n\r\n", tok, ruleID);
		}
	}
	printf("Analise semantica concluida com sucesso.\r\n");

	/*
	* ETAPA DE ANÁLISE SEMÁNTICA
	*/

	semantic = fopen("semantical.txt", "wb");
	init_queue(&queue);
	DCLVAR_step(forward_tree(tree, 3), queue, "main");
	DCLFUNC_step(forward_tree(tree, 4), queue, "main");
	fprintf(semantic, "Nivel <-> Nome <-> Categoria <-> Tipo\r\n\r\n");
	fprint_var_table(semantic, queue);
	printf("Tabela de variaveis e funcoes gerada com sucesso.");
	return 0;
}