#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor or if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;
	binary_tree_t *aux = (binary_tree_t *)tree, *aux2 = aux;

	if(!tree)
		return (0);

	while(aux->left)
	{
		aux = aux->left;
		l++;
	}
	while(aux2->right)
	{
		aux2 = aux2->right;
		r++;
	}
	return(l - r);
}
