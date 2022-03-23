#include "binary_trees.h"

/*
 * File: 11-binary_tree_size.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_size - Measure the size of a binary tree from a given node.
 * @tree: Root node of tree to measure from.
 * Return: Size of tree from a given node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right);

	return (size);
}
