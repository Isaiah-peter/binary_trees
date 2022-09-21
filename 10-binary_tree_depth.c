#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_depth - get depth
 *
 * @tree: tree
 * Return: size
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t depth_l;

	if (tree->parent != NULL)
	{
		depth_l = 1 + binary_tree_depth(tree->parent);
	}
	else
	{
		depth_l = 0;
	}
	return (depth_l);
}
