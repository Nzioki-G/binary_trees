#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - Traverse a binary tree in level-order.
 * @tree: A pointer to the root of the tree.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses the binary tree in level-order
 * (also known as breadth-first search) and calls the provided function for
 * each visited node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[1024]; /* Using an array as a queue */
	size_t front = 0, rear = 0;

	if (tree == NULL || func == NULL)
		return;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left)
			queue[rear++] = current->left;
		if (current->right)
			queue[rear++] = current->right;
	}
}
