#include "binary_trees.h"

/**
 * binary_tree_size - get size of the bt
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
if (tree)
{
size++;
size += binary_tree_size(tree->left);
size += binary_tree_size(tree->right);
}
return (size);
}
