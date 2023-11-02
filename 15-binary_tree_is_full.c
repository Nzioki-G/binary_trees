#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * in a full binary tree nodes have either 0 / 2 nodes
 * @tree: the pointer to the root node
 * Return: the 1|0 boolean of isFull
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* a leaf node is full */
	if (!tree->left && !tree->right)
		return (1);

	/* is left and right full? then I am too */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

