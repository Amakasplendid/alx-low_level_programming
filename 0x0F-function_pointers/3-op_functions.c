#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition of two numbers
 * @a: first input
 * @b: second input
 * Return: addition of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two number
 * @a: first input
 * @b: second input
 * Return: subtracts two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first input
 * @b: second input
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of ntwo numbers
 * @a: first input
 * @b: second input
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of two numbers
 * @a: first input
 * @b: seond input
 * Return: remainder after division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

