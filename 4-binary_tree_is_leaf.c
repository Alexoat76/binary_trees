#include "binary_trees.h"

/*
 * File: 4-binary_tree_is_leaf.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_is_leaf - Checks if the given node is a leaf node.
 * @node: The node to check.
 *
 * Return: 1 if the node is a leaf node, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
	{
		n = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (n);
}
