#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if @node is a root node
 * @node: given node
 *
 * Return: 1 if root, 0 if not root or if NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* if node is NULL or has a parent, it's not root */
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
