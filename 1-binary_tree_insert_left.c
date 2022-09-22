#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left child of @parent
 * @parent: pointer to the node to insert left child to
 * @value: value of neode to insert as left child
 *
 * Return: pointer to inserted node on success, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	/* check if parent had a left child and reallocate it to new's left */
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
