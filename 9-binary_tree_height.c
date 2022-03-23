#include "binary_trees.h"

/*
 * File: 9-binary_tree_height.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_height - Measure the height of a binary tree from a given node.
 * @tree: Pointer to node of tree to measure.
 * Return: Height of tree or 0 if NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
