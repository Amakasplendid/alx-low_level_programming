#include <stdio.h>
#include "main.h"
/**
 * sqrt_ - square root of a natural number
 * @n1: inputted value
 * @n2: inputted value
 * Return: square root or -1
 */
int sqrt_(int n1, int n2)
{
	if ((n2 * n2) > n1)
	{
		return (-1);
	}
	else if ((n2 * n2) == n1)
	{
		return (n2);
	}
	else
		return (sqrt_(n1, n2 + 1));
}
/**
 * _sqrt_recursion - square root of a natural number given
 * @n: inputted value
 * Return: square root number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_(n, 0));
}
