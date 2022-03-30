#ifndef QUEUE_INCLUDED
#define QUEUE_INCLUDED

typedef struct
{
    unsigned short empty;
    void* item;
    void* next;
} queue_node;
typedef queue_node* queue_t;
void init_queue(queue_t* queue);
void push_queue(queue_t queue, void* item);
void* pop_queue(queue_t queue);
unsigned short queue_isEmpty(queue_t queue);

#endif