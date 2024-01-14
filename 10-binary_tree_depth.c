#include "binary_trees.h"

/**
 * binary_tree_depth - get depth of the binary tree
 * @tree: tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->parent != NULL)
  return (1 + binary_tree_depth(tree->parent));
else
return (0);
}
