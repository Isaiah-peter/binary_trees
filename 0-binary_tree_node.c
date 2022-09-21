#include "binary_trees.h"
#include <stdlib.h>

/**
 * *binary_tree_node - create nodes
 *
 * @parent: root
 * @value: value
 * Return: binary_tree_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	result->left = NULL;
	result->n = value;
	result->parent = parent;
	result->right = NULL;

	if (parent == NULL)
	{
		parent = result;
	}
	else if (parent != NULL)
	{
		if (parent->n > value)
		{
			parent->left = result;
		}
		else if (parent->n < value)
		{
			parent->right = result;
		}
	}

	return (result);
}
