<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-blue.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>
<img src="https://img.shields.io/github/repo-size/Alexoat76/binary_trees"/>
<img src="https://img.shields.io/github/languages/code-size/Alexoat76/binary_trees.svg"/>
<img src="https://img.shields.io/github/last-commit/Alexoat76/binary_trees?style=round-square"/>
</p>

---

# 0x1D. C - Binary trees

This project you learn about of the advantages, and disadvantages of using trees as data structures. Throughout the project, it is implemented binary, binary search, AVL, and Max Binary Heap trees. <br>

<p align="center">
  <img width="500"  
        src="https://bournetocode.com/projects/AQA_A_Theory/pages/img/RootedTree.png"
  >
</p>

# Getting Started :running:	
<div style="text-align: justify">
	
## Table of Contents :clipboard:
* [About](#about)
* [Resources](#resources-books)
* [Requirements](#requirements)
* [Files](#files-file_folder)
* [Tasks](#tasks-page_with_curl)
* [Credits](#credits)

## About
The tasks in this project cover:
	
- `Binary tree`, `Binary Search Tree` and how to `use` them.
- `Data Structure` and `Algorithms` - Tree
- `Tree Traversal`

## Resources :books:
Read or watch :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=binary+tree+in+data+structure+in+c&ei=yBw5YvihMfSUwbkP-vmy8Ag&oq=binary+tree+in+data+structure+&gs_lcp=Cgdnd3Mtd2l6EAEYATIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQ6BwgAEEcQsAM6BwgAELADEENKBAhBGABKBAhGGABQ2gdY2gdgtx5oAXABeACAAXeIAXeSAQMwLjGYAQCgAQHIAQrAAQE&sclient=gws-wiz)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=binary+tree+in+data+structure+in+c)

* [Binary tree](https://intranet.hbtn.io/rltoken/YjCgugjFZBKqIeU2_lF-fQ) 
 (note the first line:  ` Not to be confused with B-tree. ` )
* [Data Structure and Algorithms - Tree](https://intranet.hbtn.io/rltoken/YERnIz9OggXbBoXpiqSMEw) 
* [Tree Traversal](https://intranet.hbtn.io/rltoken/pR4-vwFxzbph4FkMF2np1Q) 
* [Binary Search Tree](https://intranet.hbtn.io/rltoken/L2CpULSk9hQEOBKaGI8IkQ) 
* [Data structures: Binary Tree](https://intranet.hbtn.io/rltoken/jQNFgIuh8O73TqIaFeQoPA) 

## Requirements
### General

- Allowed editors: `vi`, `vim`, `emacs`.
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project, is mandatory.
- Your code should use the `Betty` style. It will be checked using **[betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)** 
 and **[betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)**.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- You are allowed to use the standard library
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, 
	but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` 
	files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions should be included in your header file called **`binary_trees.h`**.
- Don’t forget to push your header file.
- All your header files should be include guarded.

## More Info
### Data structures
The data structures and types for binary trees used.
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
 `typedef struct binary_tree_s bst_t;`
#### AVL Tree
 `typedef struct binary_tree_s avl_t;` 
#### Max Binary Heap
 `typedef struct binary_tree_s heap_t;`

### Print function

- To match the examples in the tasks, you are given **[this function](https://github.com/holbertonschool/0x1C.c)**.
- This function is used only for visualization purposes.

### Installation. :computer:
	
- Clone this repository: `https://github.com/Alexoat76/binary_trees.git`	
- `Compile` accord to `instructions` of each task.

## Files :file_folder:

+ **[binary_trees.h](./binary_trees.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
**Function Prototypes**

| File                             | Prototype                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `binary_tree_print.c`            | `void binary_tree_print(const binary_tree_t *tree)`                                              |
| `0-binary_tree_node.c`           | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`                             |
| `1-binary_tree_insert_left.c`    | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`                      |
| `2-binary_tree_insert_right.c`   | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`                     |
| `3-binary_tree_delete.c`         | `void binary_tree_delete(binary_tree_t *tree);`                                                  |
| `4-binary_tree_is_leaf.c`        | `int binary_tree_is_leaf(const binary_tree_t *node);`                                            |
| `5-binary_tree_is_root.c`        | `int binary_tree_is_root(const binary_tree_t *node);`                                            |
| `6-binary_tree_preorder.c`       | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`                       |
| `7-binary_tree_inorder.c`        | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`                        |
| `8-binary_tree_postorder.c`      | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`                      |
| `9-binary_tree_height.c`         | `size_t binary_tree_height(const binary_tree_t *tree);`                                          |
| `10-binary_tree_depth.c`         | `size_t binary_tree_depth(const binary_tree_t *tree);`                                           |
| `11-binary_tree_size.c`          | `size_t binary_tree_size(const binary_tree_t *tree);`                                            |
| `12-binary_tree_leaves.c`        | `size_t binary_tree_leaves(const binary_tree_t *tree);`                                          |
| `13-binary_tree_nodes.c`         | `size_t binary_tree_nodes(const binary_tree_t *tree);`                                           |
| `14-binary_tree_balance.c`       | `int binary_tree_balance(const binary_tree_t *tree);`                                            |
| `15-binary_tree_is_full.c`       | `int binary_tree_is_full(const binary_tree_t *tree);`                                            |
| `16-binary_tree_is_perfect.c`    | `int binary_tree_is_perfect(const binary_tree_t *tree);`                                         |
| `17-binary_tree_sibling.c`       | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`                                       |
| `18-binary_tree_uncle.c`         | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`                                         |
	
		
## Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.

## Helper File :heavy_check_mark:

+ **[binary_tree_print.c](./binary_tree_print.c)**: C function that prints binary trees in a `pretty way`.
	
## Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of prototype functions for tasks and main files for testing.

	
## Tasks :page_with_curl:

+ [x] 0\. **New node**.
	
+ **[0-binary_tree_node.c](./0-binary_tree_node.c)**
	
	Function that creates a binary tree node.
	* Prototype:  `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);` 
	* Where `parent` is a pointer to the parent node of the node to create.
	* And `value` is the value to put in the new node.
	* When created, a node does not have any child.
	* The function returns a pointer to the new node, or `NULL` on failure.

```bash
$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
$
```
---

+ [x] 1\. **Insert left**.

+ **[1-binary_tree_insert](./1-binary_tree_insert)**
	
	Function that inserts a node as the left-child of another node.
	* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);` 
	* Where  `parent` is a pointer to the node to insert the left-child in.
	* And `value` is the value to store in the new node.
	* The function returns a pointer to the created node, or `NULL` on failure or if `parent` is `NULL` 
	* If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

```bash
$ ./1-left
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)                                            
$
```
---

+ [x] 2\. **Insert right**.

+ **[2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c)**
	
	Function that inserts a node as the right-child of another node.
	* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);` 
	* Where `parent` is a pointer to the node to insert the right-child in
	* And `value` is the value to store in the new node
	* The function returns a pointer to the created node, or `NULL` on failure or if `parent` is `NULL` 
	* If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

```bash
$ ./2-right 
  .--(098)--.
(012)     (402)

  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
$
```
---

+ [x] 3\. **Delete**.

+ **[3-binary_tree_delete.c](./3-binary_tree_delete.c)**
	
	Function that deletes an entire binary tree.
	* Prototype: `void binary_tree_delete(binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to delete.
	* If `tree` is `NULL`, do nothing.

```bash
$ valgrind ./3-del
==13264== Memcheck, a memory error detector
==13264== Copyright (C) 2002-2013, and GNU GPL, by Julian Seward et al.
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

+ [x] 4\. **Is leaf**.
	
+ **[4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c)**

	Function that checks if a node is a leaf.
	* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);` 
	* Where `node` is a pointer to the node to check.
	* The function returns `1` if `node` is a leaf, otherwise `0` 
	* If `node` is `NULL`, return `0`

```bash
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

+ [x] 5\. **Is root**.
	
+ **[5-binary_tree_is_root.c](./5-binary_tree_is_root.c)**

	Function that checks if a given node is a root.
	* Prototype: `int binary_tree_is_root(const binary_tree_t *node);` 
	* Where `node` is a pointer to the node to check.
	* The function returns `1` if `node` is a root, otherwise `0` 
	* If `node` is `NULL`, return `0`
 
```bash
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

+ [x] 6\. **Pre-order traversal**.
	
+ **[6-binary_tree_preorder.c](./6-binary_tree_preorder.c)** 

	Function that goes through a binary tree using pre-order traversal.
	* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));` 
	* Where `tree` is a pointer to the root node of the tree to traverse.
	* And `func` is a pointer to a function to call for each node. The value in the node is passed a parameter to this function.
	* If `tree` or `func` is `NULL`, do nothing.

```bash
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

+ [x] 7\. **In-order traversal**.
	
+ **[7-binary_tree_inorder.c](./7-binary_tree_inorder.c)**

	Function that goes through a binary tree using in-order traversal.
	* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));` 
	* Where `tree ` is a pointer to the root node of the tree to traverse.
	* And `func` is a pointer to a function to call for each node. The value in the node is passed a parameter to this function.
	* If `tree` or `func` is `NULL`, do nothing.

```bash
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

+ [x] 8\. **Post-order traversal**.
	
+ **[8-binary_tree_postorder.c](./8-binary_tree_postorder.c)**

	Function that goes through a binary tree using post-order traversal.
	* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));` 
	* Where `tree` is a pointer to the root node of the tree to traverse.
	* And `func` is a pointer to a function to call for each node. The value in the node is passed a parameter to this function.
	* If `tree` or `func` is `NULL`, do nothing.

```bash
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
 
+ [x] 9\. **Height**.

+ **[9-binary_tree_height.c](./9-binary_tree_height.c)**
	
	Function that measures the height of a binary tree.
	* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to measure the height.
	* If `tree` is `NULL`, your function must return `0`

```bash
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

+ [x] 10\. **Depth**.
	
+ **[10-binary_tree_depth.c](./10-binary_tree_depth.c)**

	Function that measures the depth of a node in a binary tree.
	* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the node to measure the depth.
	* If `tree` is `NULL`, your function must return `0`.

```bash
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

+ [x] 11\. **Size**.
	
+ **[11-binary_tree_size.c](./11-binary_tree_size.c)**

	Function that measures the size of a binary tree.
	* Prototype: `size_t binary_tree_size(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to measure the size.
	* If `tree` is `NULL`, the function returns 0.

```bash
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

+ [x] 12\. **Leaves**.

+ **[12-binary_tree_leaves.c](./12-binary_tree_leaves.c)**

	Function that counts the leaves in a binary tree.
	* Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to count the number of leaves.
	* If `tree` is `NULL`, the function must return `0`.
	* A `NULL` pointer is not a leaf.

```bash
$ ./12-leaves 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Leaves in 98: 2
Leaves in 128: 1
Leaves in 54: 1
$
```
---

+ [x] 13\. **Nodes**.

+ **[13-binary_tree_nodes.c](./13-binary_tree_nodes.c)**

	Function that counts the nodes with at least 1 child in a binary tree
	* Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to count the number of nodes.
	* If `tree` is `NULL`, the function must return `0`.
	* A `NULL` pointer is not a node.

```bash
$ ./13-nodes
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Nodes in 98: 3
Nodes in 128: 1
Nodes in 54: 0
$
```
---

+ [x] 14\. **Balance factor**.

+ **[14-binary_tree_balance.c](./14-binary_tree_balance.c)**

	Function that measures the balance factor of a binary tree.
	* Prototype: `int binary_tree_balance(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to measure the balance factor.
	* If `tree` is `NULL`, return `0`.

```bash
$ ./14-balance
                      .-------(098)--.
            .-------(045)--.       (128)--.
       .--(012)--.       (050)          (402)
  .--(010)     (054)
(008)
Balance of 98: +2
Balance of 128: -1
Balance of 54: +0
$
```
---

+ [x] 15\. **Is full**.

+ **[15-binary_tree_is_full.c](./15-binary_tree_is_full.c)**

	Function that checks if a binary tree is full.
	* Prototype: `int binary_tree_is_full(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to check.
	* If `tree` is `NULL`, your function must return `0`.

```bash
$ ./15-full
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 full: 0
Is 12 full: 1
Is 128 full: 0
$
```
---
 
+ [x] 16\. **Is perfect**.

+ **[16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c)**

	Function that checks if a binary tree is perfect
	* Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);` 
	* Where `tree` is a pointer to the root node of the tree to check.
	* If `tree` is `NULL`, your function must return `0`.

```bash
$ ./16-perfect 
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (010)     (402)
Perfect: 1

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)
                              (010)
Perfect: 0

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)--.
                              (010)     (010)
Perfect: 0
$
```
---

+ [x] 17\. **Sibling**.

+ **[17-binary_tree_sibling.c](./17-binary_tree_sibling.c)**

	Function that finds the sibling of a node
	* Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);` 
	* Where `node` is a pointer to the node to find the sibling.
	* Your function must return a pointer to the sibling node.
	* If `node` is `NULL` or the parent is `NULL`, return `NULL`. 
	* If `node` has no sibling, return `NULL`.

```bash
$ ./17-sibling
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Sibling of 12: 128
Sibling of 110: 402
Sibling of 54: 10
Sibling of 98: (nil)
$
```
---

+ [x] 18\. **Uncle**.

+ **[18-binary_tree_uncle.c](./18-binary_tree_uncle.c)**

	Function that finds the uncle of a node
	* Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);` 
	* Where `node` is a pointer to the node to find the uncle.
	* Your function must return a pointer to the uncle node.
	* If `node` is `NULL`, return `NULL`. 
	* If `node` has no uncle, return `NULL`.

```bash
$ ./18-uncle
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Uncle of 110: 12
Uncle of 54: 128
Uncle of 12: (nil)
$
```
---	
	
## Credits

## Author(s):blue_book:

Work is owned and maintained by 
	**`Alex Orland Arévalo Tribaldos`**  and credits for `group projects` are displayed in the respective `README.md` files.

<3915@holbertonschool.com>
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/25px-Octicons-mark-github.svg.png)](https://github.com/Alexoat76)
[![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/25px-Twitter_Bird.svg.png)](https://twitter.com/aoarevalot)
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/25px-LinkedIn_logo_initials.png)](https://www.linkedin.com/in/Alexoat76/)

## Acknowledgments :mega: 

### **`Holberton School`** (*providing guidance*)
	
This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information,  please visit [this link](https://www.holbertonschool.com/).
![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)
