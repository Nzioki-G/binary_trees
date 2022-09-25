#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the root node
 * Return: 0 if @tree is NULL, otherwise the factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = (tree->left) ? binary_tree_height(tree->left) : 0;
		right_height = (tree->right) ? binary_tree_height(tree->right) : 0;
		return (left_height - right_height);
	}
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of the tree to measure
 *
 * Return: 0 if tree is NULL else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r, h;

	/* base case: tree isn't null */
	if (tree)
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);
		h = (l > r) ? l + 1 : r + 1;
		return (h);
	}
	return (0);
}
