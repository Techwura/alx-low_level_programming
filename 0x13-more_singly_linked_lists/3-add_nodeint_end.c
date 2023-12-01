#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *anew;
	listint_t *tempo = *head;

	anew = malloc(sizeof(listint_t));
	if (!anew)
		return (NULL);

	anew->n = n;
	anew->next = NULL;

	if (*head == NULL)
	{
		*head = anew;
		return (anew);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = anew;

	return (anew);
}
