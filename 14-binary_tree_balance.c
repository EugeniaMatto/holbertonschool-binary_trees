#include "binary_trees.h"
/**
 * binary_tree_balance_l - height left
 * @tree: pointer to the root node of the tree
 * Return: height left or if tree is NULL return 0
 */
int binary_tree_balance_l(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_balance_l(tree->left));
}

/**
 * binary_tree_balance_r - height right
 * @tree: pointer to the root node of the tree
 * Return: height right or if tree is NULL return 0
 */
int binary_tree_balance_r(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_balance_r(tree->right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor or if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_balance_l(tree) - binary_tree_balance_r(tree));
}
