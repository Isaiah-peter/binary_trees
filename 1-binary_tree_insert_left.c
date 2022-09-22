#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = newNode;
		newNode->left = temp;
	}
	parent->left = newNode;

	return (temp);
}
