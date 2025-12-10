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

