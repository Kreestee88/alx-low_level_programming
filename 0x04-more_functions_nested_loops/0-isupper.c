#include "main.h"
/**
 * _isuper - a function that checks for uppercase character.
 * @c: Variable
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
