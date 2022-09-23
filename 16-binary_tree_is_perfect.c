#include "binary_trees.h"


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, otherwise 0; 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int levelL, levelR;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	levelL = binary_tree_is_perfect(tree->left);
	levelR = binary_tree_is_perfect(tree->right);

	if ((levelL == 0 || levelR == 0) && (levelL != levelR))
		return (0);
	return (1);
}
