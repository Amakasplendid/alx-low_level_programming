#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory
 * @b: unsined integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
