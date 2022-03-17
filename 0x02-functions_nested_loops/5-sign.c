#include "main.h"
/**
 * print_sign - main entry
 * @n: print the n sign of a number
 * Return: 1 and print + if n is zero
 * -1 and print - if n is less than zero.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
