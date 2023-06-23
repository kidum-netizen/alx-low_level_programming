#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


Task 2.  2-mul.c

#include "main.h"

/**
 * mul - multiplies two integers.
 * @a: first number.
 * @b: second number.
 * Return: multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}
