#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_list - frees a linked list
  * @head: the beginning of the list
  */


void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}

}
