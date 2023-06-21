#include "main.h"
/**
 * print_sign - prints all natural numbers
 * @n: The determinant character
 * Return: 1 for positive number, -1 for negative number and 0 for others
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
