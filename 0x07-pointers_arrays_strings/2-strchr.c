#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: cgaracter to find
 * Return: character value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
