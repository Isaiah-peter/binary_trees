#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest ancestor of a given nodes
 * in a given binary tree
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest ancestor node, NULL otherwise
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent || !first->parent
			|| (!first->parent->parent && second->parent))
		return (binary_trees_ancestor(first, second->parent));
	else if (first->parent == second || !second->parent
			|| (!second->parent->parent && first->parent))
		return (binary_trees_ancestor(first->parent, second));
	return (binary_trees_ancestor(first->parent, second->parent));
}
