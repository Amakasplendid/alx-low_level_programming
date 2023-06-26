#include "main.h"
/**
 * swap_int - swapping the values of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
