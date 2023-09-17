#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: The chars to be checked
 * Return: 1 for lowercase char and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
