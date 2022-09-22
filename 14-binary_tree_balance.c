#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}
