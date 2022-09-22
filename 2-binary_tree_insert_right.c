#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_right - isert to right
 *
 * @parent: root
 * @value: value
 * Return: binary_tree_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));
	binary_tree_t *current;

	result->n = value;
	result->left = NULL;
	result->right = NULL;
	result->parent = parent;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (result == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		current = parent->right;
		result->right = current;
		current->parent = result;
	}

	parent->right = result;

	return (current);
}
