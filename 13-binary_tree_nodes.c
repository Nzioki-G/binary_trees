#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: the binary tree in consideration
 *
 * Return: the no. of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* a leaf node isn't counted */
	if (!tree->left && !tree->right)
		return (0);

	/* count each node in the tree BUT the leaves */
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

