#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node_right;

if (parent == NULL)
return (NULL);

node_right = binary_tree_node(parent, value);
if (node_right == NULL)
return (NULL);
if (parent->right)
{
parent->right->parent = node_right;
node_right->right = parent->right;
}
parent->right = node_right;
return (node_right);
}
