#include "../include/predef.h"
#include <string.h>
#define TOKEN_TABLE_SIZE 83
#define RULESET_SIZE 225
#define PARSING_TABLE_SIZE 133
const char* token_table[] = {
    "$",
    "while",
    "void",
    "string",
    "return",
    "numerointeiro",
    "numerofloat",
    "nomevariavel",
    "nomedochar",
    "INVALID",
    "nomedastring",
    "main",
    "literal",
    "integer",
    "INVALID",
    "inicio",
    "if",
    "i",
    "for",
    "float",
    "fim",
    "else",
    "INVALID",
    "do",
    "cout",
    "cin",
    "char",
    "callfuncao",
    ">>",
    ">=",
    ">",
    "==",
    "=",
    "<=",
    "<<",
    "<",
    "++",
    "+",
    "}",
    "{",
    ";",
    ":" ,
    "/",
    ",",
    "*",
    ")",
    "(",
    "$",
    "!=",
    "--",
    "-",
    "BLOCO",
    "DCLVAR",
    "DCLFUNC",
    "CORPO",
    "REPIDENT",
    "TIPO",
    "LDVAR",
    "CONTSEQCOUT",
    "LID",
    "TIPO_RETORNO",
    "DEFPAR",
    "VALORRETORNO",
    "PARAM",
    "LPARAM",
    "COMANDO",
    "REPCOMANDO",
    "EXPRESSAO",
    "PARAMETROS",
    "TPARAM",
    "REPPAR",
    "COMPARACAO",
    "ELSEPARTE",
    "CONTCOMPARACAO",
    "INCREMENTO",
    "SEQCOUT",
    "SEQUENCIA",
    "EXPSIMP",
    "REPEXPSIMP",
    "TERMO",
    "REPEXP",
    "FATOR",
    "REPTERMO"
};
const unsigned short rule_set[][2] = {
    {1, 2},
    {1, 11},
    {1, 39},
    {1, 52},
    {1, 53},
    {1, 54},
    {1, 38},
    {2, 7},
    {2, 55},
    {2, 41},
    {2, 56},
    {2, 40},
    {2, 57},
    {3, 17},
    {4, 17},
    {5, 43},
    {5, 7},
    {5, 55},
    {6, 13},
    {7, 19},
    {8, 3},
    {9, 26},
    {10, 17},
    {11, 59},
    {11, 41},
    {11, 56},
    {11, 40},
    {11, 57},
    {12, 7},
    {12, 55},
    {13, 60},
    {13, 7},
    {13, 61},
    {13, 39},
    {13, 52},
    {13, 53},
    {13, 54},
    {13, 4},
    {13, 46},
    {13, 62},
    {13, 45},
    {13, 38},
    {13, 53},
    {14, 13},
    {15, 2},
    {16, 26},
    {17, 19},
    {18, 3},
    {19, 17},
    {20, 5},
    {21, 6},
    {22, 7},
    {23, 8},
    {24, 10},
    {25, 17},
    {26, 17},
    {27, 46},
    {27, 63},
    {27, 45},
    {28, 56},
    {28, 64},
    {29, 40},
    {29, 56},
    {29, 64},
    {30, 17},
    {31, 15},
    {31, 65},
    {31, 40},
    {31, 66},
    {31, 20},
    {32, 17},
    {33, 65},
    {33, 40},
    {33, 66},
    {34, 7},
    {34, 32},
    {34, 67},
    {35, 10},
    {35, 32},
    {35, 67},
    {36, 8},
    {36, 32},
    {36, 67},
    {37, 7},
    {37, 76},
    {37, 75},
    {38, 17},
    {39, 27},
    {39, 7},
    {39, 68},
    {40, 17},
    {41, 46},
    {41, 69},
    {41, 70},
    {41, 45},
    {42, 17},
    {43, 43},
    {43, 69},
    {43, 70},
    {44, 5},
    {45, 10},
    {46, 6},
    {47, 8},
    {48, 7},
    {49, 16},
    {49, 46},
    {49, 7},
    {49, 71},
    {49, 45},
    {49, 39},
    {49, 65},
    {49, 40},
    {49, 66},
    {49, 38},
    {49, 72},
    {50, 21},
    {50, 39},
    {50, 65},
    {50, 40},
    {50, 66},
    {50, 38},
    {51, 17},
    {52, 1},
    {52, 46},
    {52, 7},
    {52, 71},
    {52, 45},
    {52, 39},
    {52, 65},
    {52, 40},
    {52, 66},
    {52, 38},
    {53, 31},
    {53, 73},
    {54, 48},
    {54, 73},
    {55, 30},
    {55, 73},
    {56, 29},
    {56, 73},
    {57, 35},
    {57, 73},
    {58, 33},
    {58, 73},
    {59, 5},
    {60, 6},
    {61, 10},
    {62, 8},
    {63, 7},
    {64, 18},
    {64, 46},
    {64, 7},
    {64, 32},
    {64, 73},
    {64, 40},
    {64, 7},
    {64, 71},
    {64, 40},
    {64, 74},
    {64, 45},
    {64, 39},
    {64, 65},
    {64, 40},
    {64, 66},
    {64, 38},
    {65, 36},
    {65, 5},
    {66, 49},
    {66, 5},
    {67, 23},
    {67, 39},
    {67, 65},
    {67, 40},
    {67, 66},
    {67, 38},
    {67, 1},
    {67, 46},
    {67, 7},
    {67, 71},
    {67, 45},
    {68, 25},
    {68, 28},
    {68, 7},
    {69, 24},
    {69, 34},
    {69, 12},
    {69, 75},
    {70, 17},
    {71, 34},
    {71, 58},
    {72, 12},
    {72, 75},
    {73, 17},
    {74, 43},
    {74, 7},
    {74, 76},
    {75, 79},
    {75, 80},
    {76, 27},
    {76, 7},
    {76, 68},
    {77, 37},
    {77, 79},
    {77, 80},
    {78, 50},
    {78, 79},
    {78, 80},
    {79, 17},
    {80, 81},
    {80, 82},
    {81, 17},
    {82, 44},
    {82, 81},
    {82, 82},
    {83, 42},
    {83, 81},
    {83, 82},
    {84, 5},
    {85, 6},
    {86, 7},
    {87, 10},
    {88, 8},
    {89, 46},
    {89, 67},
    {89, 45},
};
const unsigned short parsing_table[][3] = {
	{51, 2, 1},
	{52, 2, 3},
	{52, 3, 3},
	{52, 7, 2},
	{52, 13, 3},
	{52, 15, 3},
	{52, 19, 3},
	{52, 26, 3},
	{53, 2, 13},
	{53, 3, 13},
	{53, 13, 13},
	{53, 15, 19},
	{53, 19, 13},
	{53, 26, 13},
	{54, 15, 31},
	{55, 41, 4},
	{55, 43, 5},
	{56, 3, 8},
	{56, 13, 6},
	{56, 19, 7},
	{56, 26, 9},
	{57, 2, 10},
	{57, 3, 10},
	{57, 7, 11},
	{57, 13, 10},
	{57, 15, 10},
	{57, 19, 10},
	{57, 26, 10},
    {58, 7, 37},
    {58, 12, 72},
	{59, 7, 12},
	{60, 2, 15},
	{60, 3, 18},
	{60, 13, 14},
	{60, 19, 17},
	{60, 26, 16},
	{61, 39, 26},
	{61, 46, 27},
	{62, 5, 20},
	{62, 6, 21},
	{62, 7, 22},
	{62, 8, 23},
	{62, 10, 24},
	{62, 45, 25},
	{63, 3, 28},
	{63, 13, 28},
	{63, 19, 28},
	{63, 26, 28},
	{64, 40, 29},
	{64, 45, 30},
	{65, 1, 52},
	{65, 7, 34},
	{65, 8, 36},
	{65, 10, 35},
	{65, 16, 49},
	{65, 18, 64},
	{65, 23, 67},
	{65, 24, 69},
	{65, 25, 68},
	{65, 27, 39},
	{65, 40, 38},
	{66, 1, 33},
	{66, 7, 33},
	{66, 8, 33},
	{66, 10, 33},
	{66, 16, 33},
	{66, 18, 33},
	{66, 20, 32},
	{66, 23, 33},
	{66, 24, 33},
	{66, 25, 33},
	{66, 27, 33},
	{66, 38, 32},
	{66, 40, 33},
	{67, 5, 75},
	{67, 6, 75},
	{67, 7, 75},
	{67, 8, 75},
	{67, 10, 75},
	{67, 27, 76},
	{67, 46, 75},
	{68, 40, 40},
	{68, 45, 40},
	{68, 46, 41},
	{69, 5, 44},
	{69, 6, 46},
	{69, 7, 48},
	{69, 8, 47},
	{69, 10, 45},
	{70, 43, 43},
	{70, 45, 42},
	{71, 29, 56},
	{71, 30, 55},
	{71, 31, 53},
	{71, 33, 58},
	{71, 35, 57},
	{71, 48, 54},
	{72, 21, 50},
	{72, 40, 51},
	{73, 5, 59},
	{73, 6, 60},
	{73, 7, 63},
	{73, 8, 62},
	{73, 10, 61},
	{74, 36, 65},
	{74, 49, 66},
	{75, 34, 71},
	{75, 40, 70},
	{76, 34, 73},
	{76, 40, 73},
	{76, 43, 74},
	{79, 5, 80},
	{79, 6, 80},
	{79, 7, 80},
	{79, 8, 80},
	{79, 10, 80},
	{79, 46, 80},
	{80, 37, 77},
	{80, 40, 79},
	{80, 45, 79},
	{80, 50, 78},
	{81, 5, 84},
	{81, 6, 85},
	{81, 7, 86},
	{81, 8, 88},
	{81, 10, 87},
	{81, 46, 89},
	{82, 37, 81},
	{82, 40, 81},
	{82, 42, 83},
	{82, 44, 82},
	{82, 45, 81},
	{82, 50, 81}
};
char* read_file(char* filename)
{
	FILE* f;
    int fsize;
	char* filecontents;
    f = fopen(filename, "rb");
	if(f == NULL)
	{
		return NULL;
	}
	fseek(f, 0, SEEK_END);
	fsize = ftell(f);
	filecontents = (char*)malloc((fsize + 1) * sizeof(char));
	if(filecontents == NULL)
	{
		fclose(f);
		return NULL;
	}
	rewind(f);
	if(!fread(filecontents, sizeof(char), fsize, f)) return;
	fclose(f);
	filecontents[fsize] = 0;
	return filecontents;
}
unsigned short fetch_token(unsigned short rule, unsigned short index)
{
    unsigned short i, current = 0, idx=0;
    for(i = 0; i < RULESET_SIZE; i++)
    {
        if(rule_set[i][0] != current)
        {
            idx = 0;
            current = rule_set[i][0];
        }
        else idx++;
        if(rule_set[i][0] != rule || idx != index) continue;
        else return rule_set[i][1];
    }
    return 0;
}
unsigned short fetch_rule(unsigned short current_terminal, unsigned short current_non_terminal)
{
    int i;
    for(i = 0; i < PARSING_TABLE_SIZE; i++)
    {
        if(parsing_table[i][0] == current_terminal && parsing_table[i][1] == current_non_terminal)
            return parsing_table[i][2];
    }
    return 0;
}
void push_rule_into_stack(stack_t* _stack, unsigned short rule)
{
    int i;
	for(i = 16; i >= 0; i--)
	{
        unsigned short token = fetch_token(rule, i);
		if(token != 0) push_stack(_stack, token);
	}
}
void push_rule_into_tree(tree_t tree, unsigned short rule)
{
    int i;
	for(i = 0; i <= 16; i++)
	{
        unsigned short token = fetch_token(rule, i);
		if(token != 0) insert_child_tree(tree, (char*)token_to_string(token));
	}
}
const char* token_to_string(unsigned short token)
{
    if(token >= TOKEN_TABLE_SIZE) return "INVALID";
    return token_table[token];
}
void print_stack(stack_t stack)
{
    stack_t next = stack;
    while(next != NULL)
    {
        printf("%s", token_to_string(next->item));
        next = next->previous;
        if(next != NULL) printf(" ");
    }
}
void fprint_stack(FILE* file, stack_t stack)
{
    stack_t next = stack;
    while(next != NULL)
    {
        fprintf(file, "%s", token_to_string(next->item));
        next = next->previous;
        if(next != NULL) fprintf(file, " ");
    }
}
void print_var_table(queue_t queue)
{
    var_struct* vt;
    while(!queue_isEmpty(queue))
    {
        vt = queue->item;
        printf("%s %s %s %s\r\n", vt->level, vt->name, vt->category == 0 ? "variavel":"funcao", vt->type);
        queue = queue->next;
    }
}
void fprint_var_table(FILE* file, queue_t queue)
{
    var_struct* vt;
    while(!queue_isEmpty(queue))
    {
        vt = queue->item;
        fprintf(file, "%s <-> %s <-> %s <-> %s", vt->level, vt->name, vt->category == 0 ? "variavel":"funcao", vt->type);
        queue = queue->next;
        if(!queue_isEmpty(queue)) fprintf(file, "\r\n");
    }
}
unsigned short fprint_token_queue(FILE* file, queue_t queue)
{
    while(!queue_isEmpty(queue))
    {
        token_t* lex = queue->item;
        if(lex->error) 
        {
            fprintf(file, "Erro lexico. O seguinte texto foi rejeitado: \"%s\"", lex->string);
            return 1;
        }
	    else fprintf(file, "<%d, %s>", lex->token_id, lex->string);
        queue = queue->next;
        if(!queue_isEmpty(queue)) fprintf(file, "\r\n");
    }
    return 0;
}
tree_t stepback_tree(tree_t tree)
{
    tree_t next_sibling = NULL;
    if(tree->back == NULL) return NULL;
    if(tree == NULL) return NULL;
    while(tree->back != NULL && next_sibling == NULL)
    {
        next_sibling = next_sibling_tree(tree);
        tree = tree->back;
    }
    if(next_sibling == NULL) return root_tree(tree);
    return next_sibling;
}
void DCLVAR_step(tree_t tree, queue_t var_table, char* level)
{
    var_struct* add;
    if(strcmp("DCLVAR", tree->string)) return;
    if(!has_children_tree(tree)) return;
    if(!strcmp(first(tree)->string, "i")) return;
    add = malloc(sizeof(var_struct));
    add->category = 0;
    add->level = level;
    add->type = first(forward_tree(tree, 3))->string;
    add->name = first(tree)->string;
    push_queue(var_table, add);
    REPIDENT_step(forward_tree(tree, 1), var_table, add->type, level);
    LDVAR_step(forward_tree(tree, 5), var_table, level);
}
void DCLFUNC_step(tree_t tree, queue_t var_table, char* level)
{
    var_struct* add;
    if(strcmp("DCLFUNC", tree->string)) return;
    if(!has_children_tree(tree)) return;
    if(!strcmp(first(tree)->string, "i")) return;
    add = malloc(sizeof(var_struct));
    add->category = 1;
    add->level = level;
    add->type = first(first(tree))->string;
    add->name = forward_tree(tree, 1)->string;
    push_queue(var_table, add);
    DCLVAR_step(forward_tree(tree, 4), var_table, add->name);
    DCLFUNC_step(forward_tree(tree, 5), var_table, add->name);
    DCLFUNC_step(forward_tree(tree, 12), var_table, "main");
}
void REPIDENT_step(tree_t tree, queue_t var_table, char* type, char* level)
{
    var_struct* add;
    if(strcmp("REPIDENT", tree->string)) return;
    if(!has_children_tree(tree)) return;
    if(!strcmp(first(tree)->string, "i")) return;
    add = malloc(sizeof(var_struct));
    add->category = 0;
    add->level = level;
    add->type = type;
    add->name = forward_tree(tree, 1)->string;
    push_queue(var_table, add);
    REPIDENT_step(forward_tree(tree, 2), var_table, type, level);
}
void LDVAR_step(tree_t tree, queue_t var_table, char* level)
{
    var_struct* add;
    if(strcmp("LDVAR", tree->string)) return;
    if(!has_children_tree(tree)) return;
    if(!strcmp(first(tree)->string, "i")) return;
    add = malloc(sizeof(var_struct));
    add->category = 0;
    add->level = level;
    add->type = first(forward_tree(tree, 2))->string;
    add->name = first(first(tree))->string;
    push_queue(var_table, add);
    REPIDENT_step(forward_tree(first(tree), 1), var_table, add->type, level);
    LDVAR_step(forward_tree(tree, 4), var_table, level);
}