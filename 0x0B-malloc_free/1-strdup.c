#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - duplicates memory
 * @str: inputted string
 * Return: 0
 */
char *_strdup(char *str)
{
	size_t i, j;
	char* strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	strdout = (char*)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= 1; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
