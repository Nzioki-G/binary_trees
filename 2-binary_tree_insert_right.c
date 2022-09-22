#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right child node to @parent
 * @parent: node to insert right child into
 * @value: value of node to insert
 *
 * Return: returns the new node on success, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	/* check if parent had a right child then reallocate as new's right */
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
