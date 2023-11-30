#include "lists.h"

/**
* add_node - add a nex node aat the list
* @head: head of list
* @str: pointer
* Return: address of the nex element
*/



list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	*head = new;

	return (new);
}
