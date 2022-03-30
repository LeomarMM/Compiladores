#ifndef QUEUE_INCLUDED
#define QUEUE_INCLUDED

typedef struct
{
    unsigned short empty;
    void* item;
    void* next;
} queue_node;
typedef queue_node* queue_t;

void init_queue(queue_t*);
void push_queue(queue_t, void*);
void* pop_queue(queue_t);
unsigned short queue_isEmpty(queue_t);
void free_queue(queue_t);

#endif