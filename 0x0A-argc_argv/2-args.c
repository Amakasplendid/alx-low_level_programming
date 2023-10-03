#include <stdio.h>
#include "main.h"
/**
 * main - function that returns all
 * @argc: command line number
 * @argv: array of command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
	printf("%s\n", argv[s]);
	}
	return (0);
}
