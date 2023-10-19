#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: pointer
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
	return (0);

	for (a = 0; h->next != NULL; a++)
		h = h->next;
	return (a);
}

