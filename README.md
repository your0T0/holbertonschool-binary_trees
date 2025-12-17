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


--------------


The binary_tree_preorder function traverses a binary tree using pre-order traversal, which visits nodes in the following order:
Visit the current node (process its value using the provided function)
Traverse the left subtree
Traverse the right subtree
If either tree or func is NULL, the function does nothing.
This traversal is useful when copying trees, evaluating expressions, or when the root must be processed before its children.


--------------


The binary_tree_inorder function performs an in-order traversal on a binary tree.
This traversal visits nodes in the following order:

Left subtree
Current node -  passed to the function func
Right subtree
If either tree or func is NULL, the function does nothing.
In-order traversal is commonly used to retrieve values from a Binary Search Tree (BST) in sorted ascending order.


--------------


The binary_tree_postorder function traverses a binary tree using the post-order method:

Visit the left subtree
Visit the right subtree
Process the current node using the function pointer func
If either tree or func is NULL, the function does nothing.
Post-order traversal is commonly used for operations where children should be processed before their parent, such as freeing or deleting a tree structure.


--------------


The function binary_tree_height computes the height of a binary tree using recursion.
The height is defined as the number of edges on the longest path from the given node
down to a leaf node.
If the node is NULL, the function returns 0.
A leaf node has height 0.
For each node, the function calculates the height of the left subtree and the right

-----------------------------------------------

Description of binary_tree_depth Function

The binary_tree_depth function measures the depth of a node in a binary tree.
The depth is defined as the number of edges from the node to the root of the tree.

Behavior:
If the given node is NULL, the function returns 0.
The function traverses upward through the parent pointers until it reaches the root.
Each step increases the depth counter.

Purpose:
This function is useful for understanding the position of a node within a tree
and is commonly used in balance calculations and tree analysis.

⸻

--------------------------------------------

Description of binary_tree_size Function

The binary_tree_size function calculates the total number of nodes in a binary tree.

Behavior:
If the tree is NULL, the function returns 0.
The function recursively counts the current node, the left subtree,
and the right subtree.

Purpose:
This function helps determine the size of a tree or any subtree
and is useful for memory analysis and validation of tree structures.

⸻

------------------------------------------

Description of binary_tree_leaves Function

The binary_tree_leaves function counts the number of leaf nodes in a binary tree.
A leaf is defined as a node with no left or right children.

Behavior:
If the tree is NULL, the function returns 0.
If a node has no children, it is counted as a leaf.

Purpose:
This function is commonly used to analyze tree structure
and to identify terminal nodes.

⸻
----------------------------------------------

Description of binary_tree_nodes Function

The binary_tree_nodes function counts the number of nodes
that have at least one child in a binary tree.

Behavior:
If the tree is NULL, the function returns 0.
Nodes that have at least one left or right child are counted.

Purpose:
This function helps differentiate internal nodes from leaves
and is useful for tree structure analysis.

⸻

----------------------------------------

Description of binary_tree_balance Function

The binary_tree_balance function calculates the balance factor of a binary tree.
The balance factor is defined as the difference between the height of the left
subtree and the height of the right subtree.

Behavior:
If the tree is NULL, the function returns 0.
The function computes the height of both subtrees and returns their difference.

Purpose:
This function is essential for determining whether a tree is balanced
and is commonly used in self-balancing trees such as AVL trees.

⸻

-----------------------------------------------

Description of binary_tree_is_full Function

The binary_tree_is_full function checks whether a binary tree is full.
A full binary tree is a tree where every node has either
zero or two children.

Behavior:
If the tree is NULL, the function returns 0.
If any node has only one child, the function returns 0.
If all nodes satisfy the full tree condition, the function returns 1.

Purpose:
This function is used to validate tree completeness rules
and structural correctness.

-------------------------------------------------

Description of binary_tree_is_perfect Function

The binary_tree_is_perfect function checks whether a binary tree is perfect.
A perfect binary tree is a tree where all internal nodes have two children
and all leaves are at the same level.

Behavior:
If the tree is NULL, the function returns 0.
The function verifies that all leaves have the same depth
and that every internal node has exactly two children.

Purpose:
This function is useful for validating strict tree properties
and understanding tree symmetry.

⸻

--------------------------------------------

Description of binary_tree_sibling Function

The binary_tree_sibling function finds the sibling of a given node.
A sibling is defined as a node that shares the same parent.

Behavior:
If the node is NULL or has no parent, the function returns NULL.
If the node has a sibling, a pointer to that sibling is returned.
If no sibling exists, the function returns NULL.

Purpose:
This function helps navigate tree relationships
and is useful in tree traversal and structural analysis.

⸻

-------------------------------------------

Description of binary_tree_uncle Function

The binary_tree_uncle function finds the uncle of a given node.
The uncle is defined as the sibling of the node’s parent.

Behavior:
If the node is NULL, has no parent, or has no grandparent,
the function returns NULL.
If an uncle exists, the function returns a pointer to the uncle node.

Purpose:
This function is useful for analyzing extended family relationships
within a binary tree and is commonly used in advanced tree algorithms
