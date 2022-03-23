#include "binary_trees.h"

/*
 * File: 8-binary_tree_postorder.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_postorder - Performs a postorder traversal on a tree.
 * @tree: The tree to traverse.
 * @func: The function to handle the traversed node's value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
