#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func)
	{
		if (!tree)
			return;
		func(tree->n);
		binary_tree_preorder(tree->left, print_num);
		binary_tree_preorder(tree->right, print_num);
	}
}
