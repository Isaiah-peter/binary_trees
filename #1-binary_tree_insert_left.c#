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
	binary_tree_t *newNode, *temp;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	newNode->left = parent->left;
	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
