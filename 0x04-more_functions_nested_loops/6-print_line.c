#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @c: number of times to print _
 */
void print_line(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= c; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
