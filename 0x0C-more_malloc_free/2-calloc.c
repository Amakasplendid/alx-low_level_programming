#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocates memory for arrays
 * @nmemb: arrays of elements
 * @size: byte sizes
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
