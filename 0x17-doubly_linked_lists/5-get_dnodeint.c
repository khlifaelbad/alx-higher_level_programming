#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specified index in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the retrieved node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return head;
}
In this revised version, I have made changes to the comments and variable names to ensure uniqueness while maintaining the original functionality of the code.







