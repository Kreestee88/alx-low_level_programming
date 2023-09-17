#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: The nu to be printed
 * Return: 1 for positive and -1 for negative and 0 for others
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(42);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
