#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int o, p;

	for (o = 0; o < 10; o++)
	{
		for (p = 0; p < 15; p++)
		{
			if (p >= 10)
				_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
