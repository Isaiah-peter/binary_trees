#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *binary_tree_insert_left - inset to the left and side
 *
 * @parent: root
 * @value: value
 * Return: binary_tree_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));
	binary_tree_t *current;

	if (parent == NULL)
	{
		return (NULL);
	}

	result->n = value;
	result->left = NULL;
	result->right = NULL;
	result->parent = parent;

	if (parent->n > value)
	{
		if (parent->left != NULL && parent->left->n < value)
		{
			current = parent->left;
			parent->left = result;
			binary_tree_insert_left(result, current->n);
		}
		else
		{
			parent->left = result;
		}
	}

	return (current);
}
