#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if none found
 * #advanced
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t
		*first, const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first)
	{
		binary_tree_t *tmp = (binary_tree_t *)second;

		while (tmp)
		{
			if (first == tmp)
				return (ancestor);
			tmp = tmp->parent;
		}
		ancestor = first;
		first = first->parent;
	}

	return (NULL);
}
