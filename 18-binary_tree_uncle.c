#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to find uncle of
 *
 * Return: uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->parent)
	{
		if (node->parent == node->parent->parent->right)
			return (node->parent->parent->left);
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
	}
	return (NULL);
}
