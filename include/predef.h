#ifndef CLASS_PROJ_PREDEF_INCLUDED
#define CLASS_PROJ_PREDEF_INCLUDED

#include "../include/stack.h"
#include "../include/queue.h"
#include "../include/automata.h"
#include <stdio.h>
#include <stdlib.h>

char* read_file(char*);
unsigned short fetch_token(unsigned short, unsigned short);
void push_rule_into_stack(stack_t*, unsigned short);
const char* token_to_string(unsigned short);
void print_stack(stack_t);
void fprint_stack(FILE*, stack_t);
unsigned short fetch_rule(unsigned short, unsigned short);

#endif