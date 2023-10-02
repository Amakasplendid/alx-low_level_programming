#include "main.h"

/**
 * _memset - memory block
 * @s: inital address
 * @b: expected value
 * @n: num of bytes
 * Return: new values for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
