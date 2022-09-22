#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full, else 0; 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fullL, fullR;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	fullL = binary_tree_is_full(tree->left);
	fullR = binary_tree_is_full(tree->right);

	if (fullL == 0 || fullR == 0)
		return (0);
	return (1);
}
