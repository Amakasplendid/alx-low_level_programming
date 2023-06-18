#include <stdio.h>
/**
 * main - Entry point- Prints 0 - 9
 * Return: 0
 */
int main(void)
{
	int i;

	while (i = 0, i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar("\n");

	return (0);
}
