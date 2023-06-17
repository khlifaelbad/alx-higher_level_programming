#include "lists.h"

/**
 * calculate_sum - Calculates the sum of all the data in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data in the list.
 */
int calculate_sum(dlistint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}

	return total_sum;
}
