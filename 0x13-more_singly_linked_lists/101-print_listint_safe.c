#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mama, *lady;
	size_t nodular = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mama = head->next;
	lady = (head->next)->next;

	while (lady)
	{
		if (mama == lady)
		{
			mama = head;
			while (mama != lady)
			{
				nodular++;
				lady = lady->next;
				lady = lady->next;
			}

			mama = mama->next;
			while (mama != lady)
			{
				nodular++;
				mama = mama->next;
			}

			return (nodular);
		}

		mama = mama->next;
		lady = (lady->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodular, index = 0;

	nodular = looped_listint_len(head);

	if (nodular == 0)
	{
		for (; head != NULL; nodular++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodular; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodular);
}
