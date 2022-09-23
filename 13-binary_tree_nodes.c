#include "binary_trees.h"

/**
 * binary_tree_nodes - counts parent nodes in a tree
 * @tree: the root of tree
 *
 * Return: 0 if @tree is null, else number of parents
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parents = 0;

	if (!tree)
		return (0);

	/* if NOT leaf, increment */
	if (tree->left || tree->right)
		parents++;

	parents += binary_tree_nodes(tree->left);
	parents += binary_tree_nodes(tree->right);

	return (parents);
}
