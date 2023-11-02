#include "binary_trees.h"

/**
 * binary_tree_sibling - find my sibling
 * @node: pointer to the node to find sibling
 *
 * Return: the sibling or NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* what's the other child of my parent? */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

