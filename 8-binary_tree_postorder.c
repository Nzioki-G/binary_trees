#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses binary tree using post-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to function to call for each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_postorder(tree->left, print_num);
	binary_tree_postorder(tree->right, print_num);
	func(tree->n);
}

/**
 * print_num - prints an integer
 * @n: number to print
 */
void print_num(int n)
{
	printf("%d\n", n);
}
