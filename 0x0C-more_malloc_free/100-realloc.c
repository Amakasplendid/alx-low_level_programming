#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer of the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	int i, m = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
			return (ptr1);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (i = 0; i < m; i++)
		ptr1[i] = oldp[i];
	free(ptr);
	return (ptr1);
}
