#include "binary_trees.h"

/**
 * binary_tree_is_leaf - get the leaf
 *
 * @node: the node
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent != NULL)
	{
		if (binary_tree_is_leaf(node->left) == 0 &&
			binary_tree_is_leaf(node->right) == 0)
		{
			return (1);
		}
	}

	return (0);
}
