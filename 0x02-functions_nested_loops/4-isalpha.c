#include "main.h"

/**
 *Description: _isalpha.c - main function
 *
 * @c: character in the spotligh (characeter to compare)
 *
 * Return: 1 if true, 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
