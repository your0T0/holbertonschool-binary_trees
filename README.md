Description of binary_tree_t Structure

The binary_tree_t structure defines a node used in the Binary Trees project.
It represents a single element in the tree and contains:

n -  The integer value stored in the node

parent -  A pointer to the node - s parent

left - A pointer to the left child

right - A pointer to the right child

This structure serves as the core component for building and manipulating different types of binary trees, including BST, AVL, and Max Binary Heap.

Structure Definition
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

--------------


Description of binary_tree_insert_left Function

The binary_tree_insert_left function inserts a new node as the left child of a given parent node in a binary tree.

Behavior:

If the parent node is NULL, the function returns NULL.

A new node is created with the given value.

If the parent already has a left child, the new node takes its place, and the old left child becomes the left child of the new node.

The function returns a pointer to the newly created node.

This function allows dynamically building or modifying binary trees while maintaining proper parent-child relationships.


--------------


Description of binary_tree_insert_right Function

The binary_tree_insert_right function inserts a new node as the right child of a given parent node in a binary tree.

Behavior:

If the parent node is NULL, the function returns NULL.

A new node is created with the specified value.

If the parent already has a right child, the new node takes its place, and the old right child becomes the right child of the new node.

The function returns a pointer to the newly created node.

This function allows dynamically building or modifying binary trees while keeping proper parent-child relationships intact.


