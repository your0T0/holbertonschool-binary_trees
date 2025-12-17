#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: height of the tree
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int)height(tree->left) - (int)height(tree->right));
}
