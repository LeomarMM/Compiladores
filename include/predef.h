#ifndef CLASS_PROJ_PREDEF_INCLUDED
#define CLASS_PROJ_PREDEF_INCLUDED

#include "../include/stack.h"
#include "../include/queue.h"
#include "../include/automata.h"
#include "../include/tree.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* level;
    char* name;
    unsigned short category;
    char* type;
} var_struct;

char* read_file(char*);
unsigned short fetch_token(unsigned short, unsigned short);
void push_rule_into_stack(stack_t*, unsigned short);
const char* token_to_string(unsigned short);
void print_stack(stack_t);
void fprint_stack(FILE*, stack_t);
unsigned short fetch_rule(unsigned short, unsigned short);
tree_t stepback_tree(tree_t);
void DCLVAR_step(tree_t, queue_t, char*);
void DCLFUNC_step(tree_t, queue_t, char*);
void REPIDENT_step(tree_t, queue_t, char*, char*);
void LDVAR_step(tree_t, queue_t, char*);
void print_var_table(queue_t);
void fprint_var_table(FILE*, queue_t);
unsigned short fprint_token_queue(FILE*, queue_t);

#endif