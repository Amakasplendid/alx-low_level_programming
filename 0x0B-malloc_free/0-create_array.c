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
	unsigned int a;
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

	for (a = 0; a < size; size++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
