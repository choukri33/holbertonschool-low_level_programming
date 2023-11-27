#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements of a linked list
 * @h: pointer to the list
 * Return: number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != 0 || h->len != 0)
		{
			count++;
		}

		h = h->next;
	}
	return (count);

}
