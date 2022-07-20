#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through using level-order traversal
 * @tree: root of tree
 * @func: function to print
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree || (!tree->left && !tree->right && tree->parent))
		return;
	if (!tree->parent)
		(func)(tree->n);
	if (tree->left)
		(func)(tree->left->n);
	if (tree->right)
		(func)(tree->right->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
