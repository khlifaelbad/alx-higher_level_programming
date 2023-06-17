#include "lists.h"

/**
 * count_dlistint - Counts the number of elements in a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t count_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
