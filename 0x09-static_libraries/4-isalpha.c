#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: argument for the function
 * Return: 1 - if letter, lowercase or uppercase, 0 - if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
