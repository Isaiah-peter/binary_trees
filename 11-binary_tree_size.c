#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: Return the size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeL, sizeR;

	if (tree == NULL)
		return (0);

	sizeL = binary_tree_size(tree->left);
	sizeR = binary_tree_size(tree->right);
	return (sizeL + sizeR + 1);
}
