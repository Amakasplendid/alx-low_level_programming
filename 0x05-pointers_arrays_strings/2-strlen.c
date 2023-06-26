#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: The inputted string to get the length
 * Return: The length of @str
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
