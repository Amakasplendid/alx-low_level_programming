#include <stdio.h>
#include "main.h"
int _pal_find(char *s, int a, int len);
int _strlen_r(char *s);
/**
 * is_palindrome - to check a string if it is palindrome
 * @s: string
 * Return: 1 or 0
 *
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (_pal_find(s, 0, _strlen_r(s)));
}
/**
 * _strlen_r - returns length of string
 * @s: string
 * Return: length of the string
 */
int _strlen_r(char *s)

{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_r(s + 1));
}
/**
 * _pal_find - checks
 * @s: string
 * @i: determinant
 * @len: length of string
 * Return: 1 or 0
 *
 */
int _pal_find(char *s, int i, int len)

{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (_pal_find(s, i + 1, len - 1));
}
