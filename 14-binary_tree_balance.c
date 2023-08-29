#include "binary_trees.h"

/**
 * binary_tree_hheight - find tree height first
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_hheight(const binary_tree_t *tree)
{
	size_t lefth = 0;
	size_t righth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lefth = 1 + binary_tree_hheight(tree->left);
	if (tree->right)
		righth = 1 + binary_tree_hheight(tree->right);

	if (lefth > righth)
		return (lefth);
	else
		return (righth);
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_hheight(tree->left);
	if (tree->right)
		right = 1 + binary_tree_hheight(tree->right);
	balance = (left - right);

	return (balance);
}
