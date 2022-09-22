#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root of the tree to count number of nodes
 * Return: number of nodes with at least 1 child; 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeL, nodeR;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	nodeL = binary_tree_nodes(tree->left);
	nodeR = binary_tree_nodes(tree->right);
	return (nodeL + nodeR + 1);
}
