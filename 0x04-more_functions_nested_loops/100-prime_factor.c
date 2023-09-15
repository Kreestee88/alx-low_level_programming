#include <stdio.h>
/**
 * main - a program that finds and prints the largest prime factor of number
 * 612852475143
 * divisor: prints
 * prime: numbers
 * Return: 0 (Success)
 */

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}
	printf("%1d\n", prime);
	return (0);
}
