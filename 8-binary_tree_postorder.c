#include "binary_trees.h"

/**
 * binary_tree_postorder - tree traversal
 *
 * @tree: tree
 * @func: func
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
