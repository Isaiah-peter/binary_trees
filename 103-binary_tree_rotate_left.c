#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotate a tree left
 * @tree: pointer to the rooth of the tree
 * Return: pointer to the rotated root of the tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	if (tree->right->left == NULL)
	{
		tree->parent = tree->right;
		tree->parent->parent = NULL;
		tree->right->left = tree;
		tree->right = NULL;
	}
	else if (tree->right->left)
	{
		tree->parent = tree->right;
		tree->right = tree->right->left;
		tree->parent->left = tree;
		tree->parent->parent = NULL;
		tree->right->parent = tree;
	}
	else if (tree->right == NULL)
		return (tree);
	return (tree->parent);
}
