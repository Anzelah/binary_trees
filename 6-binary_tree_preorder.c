#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || *func == NULL)
		return;

	printf("%d ->", tree->n);
	binary_tree_preorder(tree->left, (func)(int n));
	binary_tree_preorder(tree->right, (func)(int n));
}