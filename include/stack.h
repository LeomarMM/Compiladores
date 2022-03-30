#ifndef STACK_INCLUDED
#define STACK_INCLUDED

typedef struct
{
    unsigned short item;
    unsigned short empty;
    void* previous;
} stack_node;
typedef stack_node* stack_t;

void init_stack(stack_t*);
void push_stack(stack_t*, unsigned short);
unsigned short pop_stack(stack_t*);
unsigned short stack_isEmpty(stack_t);
void free_stack(stack_t);

#endif
