#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checksi= if a tree binary node is a leaf
 * @node: the node to check
 *
 * Return: 1 if node is leaf, 0 if NULL or not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if node exists and has has either child it's not a leaf */
	if ((node && (node->left || node->right)) || !node)
		return (0);
	else
		return (1);
}
