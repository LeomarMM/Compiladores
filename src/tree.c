#include "../include/tree.h"
#include "../include/queue.h"
#include <stdlib.h>
void init_tree(tree_t* tree_ptr, char* string)
{
    if(tree_ptr == NULL) return;
    *tree_ptr = malloc(sizeof(tree_node));
    (*tree_ptr)->string = string;
    (*tree_ptr)->back = NULL;
    (*tree_ptr)->next = NULL;
}
void insert_child_tree(tree_t tree, char* string)
{
    tree_t newtree;
    if(tree == NULL) return;
    if(tree->next == NULL) init_queue((queue_t*)(&(tree->next)));
    init_tree(&newtree, string);
    newtree->back = tree;
    push_queue(tree->next, newtree);
}
tree_t back_tree(tree_t tree)
{
    return tree->back;
}
tree_t forward_tree(tree_t tree, unsigned int index)
{
    queue_t ptr;
    unsigned int i=0;
    if(!has_children_tree(tree)) return NULL;
    ptr = tree->next;
    while(i<index) 
    {
        if(ptr->next == NULL) return NULL;
        ptr = ptr->next;
        i++;
    }
    return ptr->item;
}
tree_t next_sibling_tree(tree_t tree)
{
    queue_t queue;
    if(tree == NULL) return NULL;
    if(tree->back == NULL) return NULL;
    queue = ((tree_t)(tree->back))->next;
    while(queue->item != tree) queue = queue->next;
    return ((queue_t)(queue->next))->item;
}
unsigned short has_children_tree(tree_t tree)
{
    if(tree == NULL) return 0;
    if(tree->next == NULL) return 0;
    return !queue_isEmpty(tree->next);
}
tree_t root_tree(tree_t tree)
{
    while(tree->back != NULL) tree = tree->back;
    return tree;
}
tree_t first(tree_t tree)
{
    if(tree == NULL) return NULL;
    if(tree->next == NULL) return NULL;
    return ((queue_t)(tree->next))->item;
}