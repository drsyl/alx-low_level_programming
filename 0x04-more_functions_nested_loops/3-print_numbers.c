#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * followed by aa new line
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
