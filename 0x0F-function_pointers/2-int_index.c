#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - index of integers function
 * @array: arrays
 * @size: size of function pointer
 * @cmp: comparison pointer
 * Return: 1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if cmp((array[i]) != 0)
			return (1);
	}
	return (-1);
}
