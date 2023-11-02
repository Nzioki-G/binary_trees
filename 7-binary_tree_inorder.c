#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary-tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* base case: null node or func */
	if (!tree || !func)
		return;

	/* in_order: left, right, parent */
	binary_tree_inorder(tree->left, func);
	func(tree->n); /* process the data in node */
	binary_tree_inorder(tree->right, func);
}

