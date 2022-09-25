#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the root of tree to check
 *
 * Return: 0 if NULL or not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	/**
	 * height: left >= right
	 * balance factor !> 1
	 */
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l >= r && ((l - r) == 1 || (l - r) == 0))
		return (1);
	else
		return (0);
	return (l && r);
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
