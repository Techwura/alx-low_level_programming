#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int boo;
	listint_t *anew;
	listint_t *tempo = *head;

	anew = malloc(sizeof(listint_t));
	if (!anew || !head)
		return (NULL);

	anew->n = n;
	anew->next = NULL;

	if (idx == 0)
	{
		anew->next = *head;
		*head = anew;
		return (anew);
	}

	for (boo = 0; tempo && boo < idx; boo++)
	{
		if (boo == idx - 1)
		{
			anew->next = tempo->next;
			tempo->next = anew;
			return (anew);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
