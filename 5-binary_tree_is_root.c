#include "binary_trees.h"

/**
 * binary_tree_is_root - get root
 *
 * @param node: the node
 * @return int: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if(node == NULL)
	{
		return 0;
	}

	if(node->parent == NULL)
	{
		return 1;
	}

	return 0;
}