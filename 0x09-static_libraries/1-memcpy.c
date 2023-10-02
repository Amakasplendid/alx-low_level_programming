#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: stored memory
 * @src: copied memory source
 * @n: bytes
 *
 * Return: n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
