#include "binary_trees.h"

/**
 * binary_tree_hheight - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height. If tree is NULL, your function must return 0
 */

size_t binary_tree_hheight(const binary_tree_t *tree)
{
        size_t leftht = 0;
        size_t rightht = 0;

        if (tree == NULL)
                return (0);

        if (tree->left)
                leftht = 1 + binary_tree_hheight(tree->left);
        if (tree->right)
                rightht = 1 + binary_tree_hheight(tree->right);
        if (leftht > rightht)
                return (leftht);
        else
                return (rightht);
}

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_ffull(const binary_tree_t *tree)
{
        int right, left;

        if (tree == NULL)
                return (0);

        if (tree->left == NULL && tree->right == NULL) /* tree has no children */
                return (1);

        if (tree->left != NULL && tree->right != NULL)
        { /* if tree is full. check their subtree recursively */
                right = binary_tree_is_ffull(tree->left);
                left = binary_tree_is_ffull(tree->right);
                return (right && left);
        }
        return (0);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full, h, hh;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		full = binary_tree_is_ffull(tree->left) && binary_tree_is_ffull(tree->right);
		h = binary_tree_hheight(tree->left);
		hh = binary_tree_hheight(tree->right);
		if (full && h == hh)
			return (1);
		else
			return (0);
				
	}
	return (0);
}


