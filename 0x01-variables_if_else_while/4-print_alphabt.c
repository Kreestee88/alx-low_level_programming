#include <stdio.h>
/**
 * main - a program that prints all the letters except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar (c);
			c++;
		}
	putchar('\n');
	return (0);
}
