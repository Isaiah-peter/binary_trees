#include "binary_trees.h"

/**
 * binary_tree_depth - get depth
 *
 * @param tree
 * @return size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    if(tree == NULL)
    {
        return (0);
    }

    size_t depth_l;

    depth_l = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
    return (depth_l);
}