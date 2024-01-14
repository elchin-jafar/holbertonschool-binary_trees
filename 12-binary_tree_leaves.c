#include "binary_trees.h"

/**
 * binary_tree_leaves - get count of tree leaves
 * @tree: tree
 * Return: size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        if (!tree->left && !tree->right)
                return (1);
        return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
