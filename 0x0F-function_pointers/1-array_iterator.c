#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates arrays
 * @array: size of arrays
 * @size: byte sizes
 * @action: parameter function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(*array);
		array++

	}
}
