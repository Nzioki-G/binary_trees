#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to function to call for each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_inorder(tree->left, print_num);
	func(tree->n);
	binary_tree_inorder(tree->right, print_num);
}

/**
 * print_num - prints an integer
 * @n: number to print
 */
void print_num(int n)
{
	printf("%d\n", n);
}
