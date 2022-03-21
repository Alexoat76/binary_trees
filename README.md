# 0x1D. C - Binary trees

## Resources
Read or watch :
* [Binary tree](https://intranet.hbtn.io/rltoken/YjCgugjFZBKqIeU2_lF-fQ) 
 (note the first line:  ` Not to be confused with B-tree. ` )
* [Data Structure and Algorithms - Tree](https://intranet.hbtn.io/rltoken/YERnIz9OggXbBoXpiqSMEw) 

* [Tree Traversal](https://intranet.hbtn.io/rltoken/pR4-vwFxzbph4FkMF2np1Q) 

* [Binary Search Tree](https://intranet.hbtn.io/rltoken/L2CpULSk9hQEOBKaGI8IkQ) 

* [Data structures: Binary Tree](https://intranet.hbtn.io/rltoken/jQNFgIuh8O73TqIaFeQoPA) 

## Requirements
### General
* Allowed editors: `vi`, `vim`, `emacs`.
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project, is mandatory.
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

* You are not allowed to use global variables.
* No more than 5 functions per file.
* You are allowed to use the standard library
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, 
	but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` 
	files at compilation. Our `main.c` files might be different from the one shown in the examples.
* The prototypes of all your functions should be included in your header file called `binary_trees.h`.
* Don’t forget to push your header file.
* All your header files should be include guarded.

## More Info
### Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.
#### Basic Binary Tree
```bash
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

```
#### Binary Search Tree
 ` typedef struct binary_tree_s bst_t;
 ` #### AVL Tree
 ` typedef struct binary_tree_s avl_t;
 ` #### Max Binary Heap
 ` typedef struct binary_tree_s heap_t;
 ` Note:  For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.
### Print function
To match the examples in the tasks, you are given  [this function](https://github.com/holbertonschool/0x1C.c) 

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction.

## Tasks

### 0. New node

Function that creates a binary tree node.
* Prototype:  `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);` 
* Where `parent` is a pointer to the parent node of the node to create.
* And `value` is the value to put in the new node.
* When created, a node does not have any child.
* The function returns a pointer to the new node, or `NULL` on failure.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
$
```
---

### 1. Insert left.

Function that inserts a node as the left-child of another node.
* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);` 
* Where  `parent` is a pointer to the node to insert the left-child in
* And `value` is the value to store in the new node
* The function returns a pointer to the created node, or `NULL` on failure or if `parent` is `NULL` 
* If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
$ ./1-left
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)                                            
$
```
---

### 2. Insert right.

Function that inserts a node as the right-child of another node.
* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);` 
* Where `parent` is a pointer to the node to insert the right-child in
* And `value` is the value to store in the new node
* The function returns a pointer to the created node, or `NULL` on failure or if `parent` is `NULL` 
* If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
$ ./2-right 
  .--(098)--.
(012)     (402)

  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
$
```
---

### 3. Delete.

Function that deletes an entire binary tree.
* Prototype: `void binary_tree_delete(binary_tree_t *tree);` 
* Where `tree` is a pointer to the root node of the tree to delete.
* If `tree` is `NULL`, do nothing.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
$ valgrind ./3-del
==13264== Memcheck, a memory error detector
==13264== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==13264== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==13264== Command: ./3-del
==13264== 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
==13264== 
==13264== HEAP SUMMARY:
==13264==     in use at exit: 0 bytes in 0 blocks
==13264==   total heap usage: 9 allocs, 9 frees, 949 bytes allocated
==13264== 
==13264== All heap blocks were freed -- no leaks are possible
==13264== 
==13264== For counts of detected and suppressed errors, rerun with: -v
==13264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
$
```
---

### 4. Is leaf.

Function that checks if a node is a leaf.
* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);` 
* Where `node` is a pointer to the node to check.
* The function returns `1` if `node` is a leaf, otherwise `0` 
* If `node` is `NULL`, return `0`

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
$ ./4-leaf 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a leaf: 0
Is 128 a leaf: 0
Is 402 a leaf: 1
$
```
---

### 5. Is root.

Function that checks if a given node is a root.
* Prototype: `int binary_tree_is_root(const binary_tree_t *node);` 
* Where `node` is a pointer to the node to check.
* The function returns `1` if `node` is a root, otherwise `0` 
* If `node` is `NULL`, return `0`
 
```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
$ ./5-root 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a root: 1
Is 128 a root: 0
Is 402 a root: 0
$
```
---

### 6. Pre-order traversal.

Function that goes through a binary tree using pre-order traversal.
* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));` 
* Where `tree` is a pointer to the root node of the tree to traverse.
* And `func` is a pointer to a function to call for each node. The value in the node is passed a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
$ ./6-pre
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
6
56
402
256
512
$
```
---

### 7. In-order traversal.

Function that goes through a binary tree using in-order traversal.
* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));` 
* Where `tree ` is a pointer to the root node of the tree to traverse.
* And `func` is a pointer to a function to call for each node. The value in the node is passed a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in
$ ./7-in
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
12
56
98
256
402
512
$
```
---

### 8. Post-order traversal.

Function that goes through a binary tree using post-order traversal.
* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));` 
* Where `tree` is a pointer to the root node of the tree to traverse.
* And `func` is a pointer to a function to call for each node. The value in the node is passed a parameter to this function.
* If `tree` or `func` is `NULL`, do nothing.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
$ ./8-post
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
56
12
256
512
402
98
$
```
---
 
### 9. Height

Function that measures the height of a binary tree.
* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);` 
* Where `tree` is a pointer to the root node of the tree to measure the height.
* If `tree` is `NULL`, your function must return `0`

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height
$ ./9-height 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Height from 98: 2
Height from 128: 1
Height from 54: 0
$
```
---

### 10. Depth

Function that measures the depth of a node in a binary tree.
* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);` 
* Where `tree` is a pointer to the node to measure the depth.
* If `tree` is `NULL`, your function must return `0`.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth
$ ./10-depth 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Depth of 98: 0
Depth of 128: 1
Depth of 54: 2
$
```
---

### 11. Size

Function that measures the size of a binary tree.
* Prototype: `size_t binary_tree_size(const binary_tree_t *tree);` 
* Where `tree` is a pointer to the root node of the tree to measure the size.
* If `tree` is `NULL`, the function returns 0.

```bash
$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size
$ ./11-size 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Size of 98: 5
Size of 128: 2
Size of 54: 1
$
```
---