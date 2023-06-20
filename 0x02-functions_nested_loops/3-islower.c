#include "main.h"

/**
 * _islower - check the lowercase code for int c
 *@c: the determinant character
 * Return: 1 for lowecase and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
