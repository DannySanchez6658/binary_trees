#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function
 * that inserts a node to the left of a
 * parent node
 *
 * @parent: a parent node
 * @value: a value of a node
 * Return: a pointer to the new node
 * if success or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}

	parent->left = newNode;
	return (newNode);
}