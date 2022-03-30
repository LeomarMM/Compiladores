#include "../include/queue.h"
#include <stdlib.h>
void init_queue(queue_t* queue)
{
    *queue = malloc(sizeof(queue_node));
    (*queue)->empty = 1;
    (*queue)->item = 0;
    (*queue)->next = NULL;
}
void push_queue(queue_t queue, void* item)
{
    queue_t next;
    if(queue == NULL) return;
    if(queue->empty) 
    {
        queue->item = item;
        init_queue((queue_t*)&(queue->next));
        queue->empty = 0;
        return;
    }
    next = queue->next;
    while(next->next != NULL) next = next->next;
    next->item = item;
    init_queue((queue_t*)&(next->next));
    next->empty = 0;
}
void* pop_queue(queue_t queue)
{
    void* item = queue->item;
    queue_t ptr = queue->next;
    if(queue == NULL) return NULL;
    if(queue->next == NULL)
    {
        void* _return = queue->item;
        queue->item = 0;
        queue->empty = 1;
        return _return;
    }
    item = queue->item;
    ptr = queue->next;
    queue->item = ptr->item;
    queue->next = ptr->next;
    free(ptr);
    return item;
}
unsigned short queue_isEmpty(queue_t queue)
{
    return queue->empty;
}