#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int d;
	for (d = 0; d < 9; d++)
		{
			if (d != 2)
				{
					if (d != 4)
						{
							_putchar(d);
							}
					}
			}
	_putchar('\n');
}
