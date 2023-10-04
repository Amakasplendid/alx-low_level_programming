#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates memory
 * @str: inputted string
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *strdin;

	if (str == 0)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	strdin = (char *)malloc(sizeof(char) * (a + 1));

	if (strdin == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < 1; b++)
	{
		strdin[b] = str[b];
	}
	return (strdin);
}

