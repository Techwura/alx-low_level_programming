#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *anew;
	list_t *tempo = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	anew = malloc(sizeof(list_t));
	if (!anew)

		return (NULL);

	anew->str = strdup(str);
	anew->len = len;
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
