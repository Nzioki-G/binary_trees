#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of the binaty tree
 * @tree: pointer to the binary tree's root node
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* leaf nodes have size 1 */
	if (!tree->left && !tree->right)
		return (1);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

