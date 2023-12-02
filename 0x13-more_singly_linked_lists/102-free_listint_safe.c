#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t bra = 0;
	int life;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		life = *h - (*h)->next;
		if (life > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			bra++;
		}
		else
		{
			free(*h);
			*h = NULL;
			bra++;
			break;
		}
	}

	*h = NULL;

	return (bra);
}
