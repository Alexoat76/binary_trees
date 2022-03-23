#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * File: binary_trees.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 * Desc: Header file containing prototypes for all functions
 *       in the 0x1D. C - Binary trees. | project
 */

/* Data structures */

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	/* Integer stored in the node. */
	int n;
	/* Pointer to the parent node. */
	struct binary_tree_s *parent;
	/* Pointer to the left child node. */
	struct binary_tree_s *left;
	/* Pointer to the right child node. */
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
/* Binary Search Tree. */
typedef struct binary_tree_s bst_t;
/* AVL Tree. */
typedef struct binary_tree_s avl_t;
/* Max Binary Heap. */
typedef struct binary_tree_s heap_t;

/* Helper function for print. */
void binary_tree_print(const binary_tree_t *);

/* Task function prototypes. */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif /* _BINARY_TREES_H_ */
