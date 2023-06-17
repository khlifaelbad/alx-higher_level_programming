#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t list
 *                            at a given position.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The position to insert the new node.
 * @n: The integer value for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int n)
{
	dlistint_t *temp = *head, *new_node;

	if (index == 0)
		return (add_dnodeint(head, n));

	for (; index != 1; index--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(head, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
