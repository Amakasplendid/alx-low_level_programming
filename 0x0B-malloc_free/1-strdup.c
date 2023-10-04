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
	unsigned int i, j;
	char *strdin;

	if (str == 0)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strdin = (char *)malloc(sizeof(char) * (i + 1));

	if (strdin == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < 1; j++)
	{
		strdin[j] = str[j];
	}
	return (strdin);
}

