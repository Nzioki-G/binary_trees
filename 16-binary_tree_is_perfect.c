#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if `tree` is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;
	size_t perfect_depth;

	if (tree == NULL)
		return (0);

	perfect_depth = binary_tree_depth(tree);

	while (tree)
	{
		if (binary_tree_depth(tree) != perfect_depth)
			return (0);

		if (tree->left == NULL)
		{
			if (tree->right != NULL)
				return (0);

			if (depth == 0)
				depth = perfect_depth;
			else if (depth != perfect_depth)
				return (0);
		}
		else
		{
			if (depth == 0)
				depth = perfect_depth;
			else if (depth != perfect_depth)
				return (0);
			tree = tree->left;
		}
	}

	return (1);
}
