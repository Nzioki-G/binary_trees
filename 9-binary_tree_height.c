#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of the tree to measure
 *
 * Return: 0 if tree is NULL else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right, max_height;

	if (!tree)
		return 0;

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		max_height = (h_left > h_right) ? h_left : h_right;
	else
		max_height = (h_left > h_right) ? 1 + h_left : 1 + h_right;
	return max_height;
}
