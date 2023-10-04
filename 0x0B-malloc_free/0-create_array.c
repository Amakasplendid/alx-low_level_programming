#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: input for size
 * @c: to store the char strings
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; size++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
