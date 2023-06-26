#include "main.h"
/**
 * puts2 - prints everyother character
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		i++;
	}
	j = i - 1;
	for (b = 0; b <= t; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
