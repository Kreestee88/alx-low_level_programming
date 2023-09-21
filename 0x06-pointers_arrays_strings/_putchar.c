#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charater to print
 * Return: 1 (Success), -1 on error and ermo is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
