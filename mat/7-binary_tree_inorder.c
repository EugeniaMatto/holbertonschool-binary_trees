#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*functionToApply)(int) = func;

	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, functionToApply);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, functionToApply);
	functionToApply(tree->n);
}
