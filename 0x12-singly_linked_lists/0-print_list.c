#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list -prints all the elements
 * @h: head of the pointer
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);
	i
	for (a = 1; h->next != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (a);
}
