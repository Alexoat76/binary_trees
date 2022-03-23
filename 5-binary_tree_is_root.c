#include "binary_trees.h"

/*
 * File: 5-binary_tree_is_root.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_is_root - Checks if the given node is the root node.
 * @node: The node to check.
 * Return: 1 if it is the root node, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node != NULL) && (node->parent == NULL))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
