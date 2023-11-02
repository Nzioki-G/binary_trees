#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert as left child
 * @parent: pointer to the node that gains a left child
 * @value: data to store in the new node
 * Return: pointer to the node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (!parent)
		return (NULL);

	left_child = malloc(sizeof(binary_tree_t));
	if (!left_child)
		return (NULL);

	left_child->n = value;
	left_child->parent = parent;
	left_child->right = NULL;
	if (parent->left)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
	}
	parent->left = left_child;

	return (left_child);
}

