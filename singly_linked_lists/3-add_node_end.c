#include "lists.h"

/**
* add_node_end - add a nex node aat the list
* @head: head of list
* @str: pointer
* Return: address of the nex element
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_last, *tmp;
	unsigned int len = 0;

	tmp = (*head);
	new_last = malloc(sizeof(list_t));
	if (new_last == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
		new_last->str = strdup(str);
		new_last->len = len;
		new_last->next = (NULL);

	if ((*head) == NULL)
	{
		*head = new_last;
		return (new_last);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
		tmp->next = new_last;

	return (new_last);
}
