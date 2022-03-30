#include "../include/predef.h"
stack_t stack;
queue_t queue;
int main()
{
	/*
	* DECLARAÇÃO DE VARIÁVEIS
	*/

	int i = 0;
	char path[256];
	char* str;
	token_t terminator;
	queue_t current_tok;
	FILE* output;
	
	/*
	* ETAPA DE ANÁLISE LÉXICA
	*/

	printf("Digite o nome do arquivo a analisar: ");
	scanf("%s", path);
	str = read_file(path);
	if(str == NULL) 
	{
		printf("Erro de leitura do arquivo\n");
		return 1;
	}
	output = fopen("log.txt", "wb");
	fprintf(output, "%s\r\n\r\n", str);
	init_queue(&queue);
	while(str[i])
	{
		token_t* lex = query_automata(&i, str);
		if(lex == NULL) break;
		else if(lex -> error) 
		{
			fprint_token(output, lex);
			return 2;
		}
		push_queue(queue, lex);
		fprint_token(output, lex);
	}
	free(str);
	fprintf(output, "\r\n");
	
	/*
	* ETAPA DE ANÁLISE SINTÁTICA
	*/

	terminator.token_id=0;
	push_queue(queue, &terminator);
	init_stack(&stack);
	push_stack(&stack, 0);
	push_stack(&stack, 51);
	current_tok = queue;

	fprintf(output, "Pilha: ");
	fprint_stack(output, stack);
	fprintf(output, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)current_tok->item)->token_id));
	fprintf(output, "Acao: Empilha simbolo inicial\r\n\r\n");
	while(1)
	{
		unsigned short stack_tokenID = stack->item;
		unsigned short code_tokenID = ((token_t*)current_tok->item)->token_id;	
		unsigned short ruleID = fetch_rule(stack_tokenID, code_tokenID);
		const char* tok;
		if(stack_tokenID == code_tokenID)
		{
			
			if(stack_tokenID == 0)
			{
				fprintf(output, "Pilha: ");
				fprint_stack(output, stack);
				fprintf(output, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)current_tok->item)->token_id));
				fprintf(output, "Acao: Analise sintatica finalizada com sucesso.");
				break;
			}
			pop_stack(&stack);
			tok = token_to_string(((token_t*)current_tok->item)->token_id);
			current_tok = current_tok->next;
			fprintf(output, "Pilha: ");
			fprint_stack(output, stack);
			fprintf(output, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)current_tok->item)->token_id));
			fprintf(output, "Acao: Desempilha simbolo identificado [ %s ]. Avanca entrada.\r\n\r\n", tok);
			continue;
		}
		else if(stack_tokenID == 0 || code_tokenID == 0 || ruleID == 0)
		{
			fprintf(output, "Pilha: ");
			fprint_stack(output, stack);
			fprintf(output, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)current_tok->item)->token_id));
			if(stack_tokenID == 0) fprintf(output, "Acao: Erro sintatico. A pilha gramatical chegou ao fim antes da entrada.\r\n\r\n");
			else if(code_tokenID == 0) fprintf(output, "Acao: Erro sintatico. O codigo de entrada chegou ao fim antes da pilha gramatical.\r\n\r\n");
			else fprintf(output, "Acao: Erro sintatico. Nao existem producoes para esse estado.\r\n\r\n");
			return 3;
		}
		tok = token_to_string(stack->item);
		pop_stack(&stack);
		push_rule_into_stack(&stack, ruleID);
		if(stack->item == 17)
		{
			pop_stack(&stack);
			fprintf(output, "Pilha: ");
			fprint_stack(output, stack);
			fprintf(output, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)current_tok->item)->token_id));
			fprintf(output, "Acao: Desempilha simbolo [ %s ], producao nula na regra %i.\r\n\r\n", tok, ruleID);
		}
		else
		{
			fprintf(output, "Pilha: ");
			fprint_stack(output, stack);
			fprintf(output, "\r\nEntrada Atual: [ %s ]\r\n", token_to_string(((token_t*)current_tok->item)->token_id));
			fprintf(output, "Acao: Desempilha simbolo [ %s ] e empilha regra %i.\r\n\r\n", tok, ruleID);
		}
	}
	return 0;
}