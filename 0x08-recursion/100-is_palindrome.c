#include "main.h"

/* palindrome is a word, phrase, or sequence that reads the same backwards*/

/**
 * length - its pretty long
 * @s: string
 * Return: string length
 */

int length(char *s)
{
	int x = 0;

	if (*s)
	{
		x = x + length(s + 1);
		return (x += 1);
	}
	return (0);
}

/**
 * helper2 - even more reinforcement
 * @x: unknown int
 * @s: string
 * Return: int value
 */

int helper2(int x, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - x]) /*some array action baby*/
		{
			return (0);
		}
		else
		{
			return (helper2(x + 1, s + 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - mirror mirror
 * @s: string to check
 * Return: bool
 */

int is_palindrome(char *s)
{
	int x = 1;

	return (helper2(x, s));
}
