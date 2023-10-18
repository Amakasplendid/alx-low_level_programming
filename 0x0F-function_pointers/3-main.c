#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculator funcyion
 * @argc: argument count
 * @argv: vector of argument
 * Return: result
 */
int main(int argc, char *argv[])
{
	char *op;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = (argv[2]);
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		print("Error\n");
		exit(98);
	}

	if ((*op == '/' && n2 == 0) || (*op == '&' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op) (n1, n2));

	return (0);
}
