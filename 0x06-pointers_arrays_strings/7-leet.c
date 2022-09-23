#include "main.h"

/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 *
 * a tribute to me and her LOL
 */
char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int lilian;
	int fred;

	for (lilian = 0; s[lilian] != '\0'; lilian++)
	{
		for (fred = 0; alphaArr[fred] != '\0'; fred++)
		{
			if (s[lilian] == alphaArr[fred])
			{
				s[lilian] = alphaArr[fred + 1];
				break;
			}
		}
	}
	return (s);
}
