#include "binary_trees.h"

/*
 * File: 10-binary_tree_depth.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * Depth is measured from root parent node going down.
 * @tree: The binary tree.
 * Return: Depth of tree from given node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			depth++;
			node = node->parent;
		}
	}
	return (depth);
}
