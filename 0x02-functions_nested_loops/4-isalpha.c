#include "main.h"

/**
 * _isalpha.c - main function
 *
 * @c: character in the spotligh (characeter to compare)
 *
 * Return: 1 if true, 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
	{
		return (1);
	}
	return (0);
}
