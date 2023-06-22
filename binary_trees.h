#ifndef B_TREE
#define B_TREE

/** libraries **/
#include <stdlib.h>
#include <stdio.h>

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

/** datatypes **/
typedef struct binary_tree_s binary_tree_t; /** binary tree **/
typedef struct binary_tree_s bst_t; /** binary search tree **/
typedef struct binary_tree_s avl_t; /** AVL tree **/
typedef struct binary_tree_s heap_t; /** max binary heap **/

/** binary tree printer **/
void binary_tree_print(const binary_tree_t *);

/** function prototypes **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);

#endif
