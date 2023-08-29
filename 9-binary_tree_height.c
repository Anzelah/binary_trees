#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height. If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftht = 0;
	size_t rightht = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftht = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rightht = 1 + binary_tree_height(tree->right);
	if (leftht > rightht)
		return (leftht);
	else
		return (rightht);
}
