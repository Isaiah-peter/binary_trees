#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * tree_lvl - find level of a given binary tree
 * @tree: a pointer to a root node
 * @func: a pointer  to a function to call for each node
 * @level: number of level for both sides of a binary tree
 *
 * Return: Void
 */

void tree_lvl(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!level)
		func(tree->n);

	else
	{
		tree_lvl(tree->left, func, level - 1);
		tree_lvl(tree->right, func, level - 1);
	}
}


/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: a pointer to a root node
 * @func: a pointer to a function to call for each node
 *
 * Return: Void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t x, h;

	h = binary_tree_height(tree);

	if (!tree || !func)
		return;

	for (x = 0; x <= h; x++)
		tree_lvl(tree, func, x);
}
