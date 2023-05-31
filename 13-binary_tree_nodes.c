#include "binary_trees.h"


/**
 * binary_tree_nodes - count the nodes with at least 1 child in a binary tree
 * @tree: binary tree
 * Return: nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}