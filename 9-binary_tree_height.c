#include "binary_trees.h"

/**
 * binary_tree_height - calculte the height of the binary tree
 * @tree: pointer to the tree
 *
 * Return: the height of the tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* don't read null nodes */
	if (!tree)
		return (0);

	/* leaf has height 0 */
	if (!tree->right && !tree->left)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* max height of the subtrees + 1 (current node) */
	return (1 + (left_height > right_height ? left_height : right_height));
}

