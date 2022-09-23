#include "binary_trees.h"
/**
 * binary_tree_balance- count balance factor of tree
 * @tree: the tree
 * Return: int balanace or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	
	right = (tree->right) ? (int)binary_tree_height(tree->right) : -1;
	
	return (left - right);
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
