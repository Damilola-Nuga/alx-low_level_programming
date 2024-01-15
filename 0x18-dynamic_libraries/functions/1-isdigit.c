#include "main.h"

/**
 * _isdigit - checks if variable is a digit between 0 and 9
 * @c: character to check if it is a digit
 * Return: 1 - if digit, 0 - if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
