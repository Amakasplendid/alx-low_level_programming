#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: value
 * @n: value
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *string;

	va_list ptr_string;

	va_start(ptr_string, n);

	for (j = 0; j < n; j++)
	{
		string = va_arg(ptr_string, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_string);

}
