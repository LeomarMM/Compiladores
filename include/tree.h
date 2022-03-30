#ifndef TREE_INCLUDED
#define TREE_INCLUDED

typedef struct
{
    char* string;
    void* back;
    void* next;
} tree_node;
typedef tree_node* tree_t;

void init_tree(tree_t*, char*);
void insert_child_tree(tree_t, char*);
tree_t back_tree(tree_t);
tree_t forward_tree(tree_t, unsigned int idx);
tree_t next_sibling_tree(tree_t);
unsigned short has_children_tree(tree_t tree);
tree_t root_tree(tree_t tree);
tree_t first(tree_t tree);

#endif