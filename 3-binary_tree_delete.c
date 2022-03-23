#include "binary_trees.h"

/*
 * File: 3-binary_tree_delete.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * binary_tree_delete - Deletes a binary tree from memory.
 * @tree: The tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
