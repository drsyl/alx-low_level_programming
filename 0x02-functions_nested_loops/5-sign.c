#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is greater than zero
 * 0 and print - if n is less than zero
 * -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	_putchar (48);
	return (0);
}
