#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - A function that inserts a node as the left-child
 *			of another node.
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: return a pointer to the created node,
 *	or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));
	binary_tree_t *current;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (result == NULL)
	{
		return (NULL);
	}

	result->n = value;
	result->left = NULL;
	result->right = NULL;
	result->parent = parent;

	if (parent->left != NULL)
	{
		current = parent->left;
		parent->left = result;
		binary_tree_insert_left(result, current->n);
	}
	else
	{
		parent->left = result;
	}

	return (current);
}
