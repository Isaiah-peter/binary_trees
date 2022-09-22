#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * binary_tree_height - get height of tree
 *
 * @tree: tree
 * Return: size
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l >= height_r ? height_l : height_r);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: returns the balance factor of the tree, 0 if tree is NULL
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	return (height_l - height_r);
}
