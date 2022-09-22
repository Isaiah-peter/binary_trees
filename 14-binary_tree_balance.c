#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_balance - counts the nodes with at least 1 child in a binary
 *
 * @tree: pointer to the root of the tree to count number of nodes
 * Return: number
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_b_t_balance;
	int right_b_t_balance;
	int total;

	if (tree == NULL)
	{
		return (0);
	}

	left_b_t_balance = binary_tree_balance(tree->left);

	if (left_b_t_balance == -1)
		return -1;

	right_b_t_balance = binary_tree_balance(tree->right);
	if (right_b_t_balance == -1)
		return -1;

	total = left_b_t_balance - right_b_t_balance;

	if (total > 1)
	{
		return (-1);
	}

	return (left_b_t_balance > right_b_t_balance ? left_b_t_balance : right_b_t_balance);
}
