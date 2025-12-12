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



--------------


Description -  binary_tree_delete

The function binary_tree_delete is responsible for deleting an entire binary tree and freeing all allocated memory associated with it.
It uses a post-order traversal approach, meaning it deletes the left subtree first, then the right subtree, and finally frees the current node.

How it works:

If the input pointer tree is NULL, the function does nothing.

Recursively calls itself on the left child.

Recursively calls itself on the right child.

Frees the current node from memory.

Why post-order traversal?

Post-order is used because a node must only be deleted after its children have been deleted.
This ensures safe memory deallocation without leaving dangling pointers.

Purpose:

This function completely frees a binary tree to avoid memory leaks and is often used at the end of programs that dynamically create binary trees.


--------------


The function binary_tree_is_leaf checks whether a given binary tree node is a leaf.
A node is considered a leaf if it has no left child and no right child.

Returns 1 if the node is a leaf.

Returns 0 if the node is not a leaf or if node is NULL.

This function is commonly used to identify terminal nodes in tree algorithms such as counting leaves, tree traversal, or deletion.



--------------


The function binary_tree_is_root determines whether a given node is the root of a binary tree.
A node is considered a root if it has no parent.

Returns 1 if the node is a root.

Returns 0 if it is not a root or if node is NULL.

This function is useful in verifying tree structure, validating inputs, and identifying top-level nodes during traversal or manipulation.
