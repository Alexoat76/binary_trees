#include "binary_trees.h"

/*
 * File: 13-binary_tree_nodes.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_nodes - Gets the # of nodes of a binary tree.
 * @tree: root node to draw height from for tree.
 * Return: Size_t representing height, 0 on failure or NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	nodes += (tree->right || tree->left) ? 1 : 0;
	return (nodes);
}
