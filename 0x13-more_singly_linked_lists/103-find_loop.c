#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nyaaa = head;
	listint_t *pre = head;

	if (!head)
		return (NULL);

	while (nyaaa && pre && pre->next)
	{
		pre = pre->next->next;
		nyaaa = nyaaa->next;
		if (pre == nyaaa)
		{
			nyaaa = head;
			while (nyaaa != pre)
			{
				nyaaa = nyaaa->next;
				pre = pre->next;
			}
			return (pre);
		}
	}

	return (NULL);
}
