#include "../include/stack.h"
#include <stdlib.h>
void init_stack(stack_t* stack)
{
    if(stack == NULL) return;
    *stack = malloc(sizeof(stack_node));
    (*stack)->item = 0;
    (*stack)->previous = NULL;
    (*stack)->empty = 1;
}
void push_stack(stack_t* stack, unsigned short item)
{
    if(stack == NULL) return;
    if(*stack == NULL) return;
    if(stack_isEmpty(*stack)) 
    {
        (*stack)->item = item;
        (*stack)->empty = 0;
    }
    else
    {
        stack_t _new;
        init_stack(&_new);
        _new->item = item;
        _new->previous = *stack;
        _new->empty = 0;
        *stack = _new;
    }
}
unsigned short pop_stack(stack_t* stack)
{
    unsigned short _return;
    stack_t trash;
    if(stack == NULL) return 0;
    if(*stack == NULL) return 0;
    _return = (*stack)->item;
    if((*stack)->previous == NULL)
    {
        (*stack)->item = 0;
        (*stack)->empty = 1;
        return _return;
    }
    trash = *stack;
    *stack = (*stack)->previous;
    free(trash);
    return _return;
}
unsigned short stack_isEmpty(stack_t stack)
{
    return stack->empty;
}