#include "binary_trees.h"

/**
 * *binary_tree_sibling - function must return a pointer to the sibling node
 *
 * @node: is a pointer to the node to find the sibling
 * Return: binary_tree_t* or NULL if not found
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		return (NULL);
	}

	if (parent->left == node)
	{
		return (parent->right);
	}

	return (parent->left);
}
