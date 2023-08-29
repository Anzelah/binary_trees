#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	
	free(tree->left->right);
	free(tree->left);
	free(tree->right->right);
	free(tree->right);
	free(tree);
}
