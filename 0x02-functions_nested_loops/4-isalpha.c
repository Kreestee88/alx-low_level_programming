#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: The char to be checked
 * Return: 1 for lphabetic char and 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
