#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - value of a variable
 * @separator: value of a variable
 * @n: inputted value
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c, ar;

	va_list ptr;

	va_start(ptr, n);

	for (c = 0; c < n; c++)
	{
		ar = va_arg(ptr, const unsigned int);
		printf("%d", ar);

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
	
}
