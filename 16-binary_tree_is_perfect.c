#include "binary_trees.h"


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, otherwise 0; 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}

	return (1);
}

/**
 * binary_tree_height - get the height of tree
 * @tree: the tree to measure
 *Return: size_t height or 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	
	size_t lh, rh;

	
	if (!tree || (!tree->left && !tree->right))
		return (0);
	
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	
	return ((lh > rh ? lh : rh) + 1);
}
