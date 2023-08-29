#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL) /* tree has no children */
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{ /* if tree is full. check their subtree recursively */
		right = binary_tree_is_full(tree->left);
		left = binary_tree_is_full(tree->right);
		return (right && left);
	}
	return (0);
}
