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
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->right != NULL)
	{
		temp = parent->right;
		newNode->right = temp;
		temp->parent = newNode;
	}

	parent->right = newNode;

	return (temp);
}
