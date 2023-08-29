#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lefth = 0;
	int righth = 0;
	int balance;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lefth = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		righth = 1 + binary_tree_balance(tree->right);

	balance = (lefth - righth);
	return (balance);
}
