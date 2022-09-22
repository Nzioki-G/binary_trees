#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree and frees its memory
 * @tree: the tree to delete
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* binary_tree_t *tmp;*/

	/* if tree is NULL, do nothing */
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
