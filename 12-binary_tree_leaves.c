#include "binary_trees.h"

/**
 * binary_tree_leaves - check if a tree tree is a pointer to
 *  the root node of the tree to count the number of leaves
 *
 * @tree: a pointer to a tree structure
 * Return: size_t of the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right;
	size_t left;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	right = tree->right ? 1 : 0;
	left = tree->left ? 1 : 0;

	return (left + right);
}
