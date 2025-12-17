#include "binary_trees.h"

/**
 * left_depth - gets the depth following the leftmost path
 * @tree: pointer to the root node
 *
 * Return: depth
 */
static size_t left_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the current node
 * @d: expected depth of leaves
 * @level: current level
 *
 * Return: 1 if perfect, otherwise 0
 */
static int is_perfect(const binary_tree_t *tree, size_t d, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (d == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_perfect(tree, left_depth(tree), 0));
}
