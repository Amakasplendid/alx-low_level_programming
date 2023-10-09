#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  *array_range - creates arrays
 *  @min: minimum
 *  @max: maximum
 *  Return: pointer of the new array
 */
int *array_range(int min, int max)
{
	int a, b;
	int *l;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	l = malloc(sizeof(int) * b);
	if (l == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		l[a] = min;
		min++;
	}
	return (l);
}
