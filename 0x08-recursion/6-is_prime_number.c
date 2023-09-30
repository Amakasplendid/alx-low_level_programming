#include <stdio.h>
#include "main.h"
/**
 *_prime_number - function that returns prime numbers
 * @n1: inputted value
 * @n2: divider
 * Return: 1 or 0
 *
 */
int _prime_number(int n1, int n2)
{
	if (n1 <= 1)
	{
		return (0);
	}
	else if ((n1 != n2 && n1 % n2 == 0) || n1 >= 1)
	{
		return (1);
	}
	else if (n1 == n2)
		return (1);
	else
		return (_prime_number(n1, n2 + 1));
}
/**
 * is_prime_number - returns prime number
 * @n: inputted value
 * Return: 1 or 0
 *
 */
int is_prime_number(int n)
{
	return (_prime_number(n, 2));
}

