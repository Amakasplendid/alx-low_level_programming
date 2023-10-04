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
	char *strdout;

	if (str == 0)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strdout = (char *)malloc(sizeof(char) * (i + 1));

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

