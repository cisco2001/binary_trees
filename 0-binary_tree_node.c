#include "binary_trees.h"

/**
 * binary_tree_node - function that creates binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in a new node
 *
 * Return: pointer to the new node or NULL if operation fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (new_node);
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
