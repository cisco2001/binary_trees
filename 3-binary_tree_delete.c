#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_node, *right_node;

	if (!tree);
	else
	{
		left_node = tree->left;
		right_node = tree->right;
		free(tree);
		tree = left_node;
		binary_tree_delete(tree);
		tree = right_node;
		binary_tree_delete(tree);
	}
}
