#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves. If tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t counti = 0;
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	counti = binary_tree_leaves(tree->right);
	count = binary_tree_leaves(tree->left);

	leaves = (count + counti);

	return (leaves);
}
