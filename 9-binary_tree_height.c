#include "binary_trees.h"
/**
 * binary_tree_height - fucntion that goes through a binary tree
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (2);
	else if (tree->left || tree->right)
		return (1);
	return (0);
}
