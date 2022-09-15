#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @c: character to check
 * REturn 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
