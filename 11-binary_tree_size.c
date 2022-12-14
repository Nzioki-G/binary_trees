#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree to measure size / pointer to root node
 *
 * Return: 0 if tree is null, otherwise its size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0, size;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left); /* all left nodes */
	size_r = binary_tree_size(tree->right); /* all right nodes */
	size = size_l + size_r + 1; /* left + right + root */

	return (size);
}
