#include "binary_trees.h"

/*
 * File: 12-binary_tree_leaves.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_leaves - Gets the # of leaves of a binary tree.
 * @tree: Root node to draw height from for tree.
 * Return: Size_t representing height, 0 on failure or NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
