#include "main.h"

/**
 * _islower - main fuinction
 *
 * Rueturn: 1 if c is lower, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
