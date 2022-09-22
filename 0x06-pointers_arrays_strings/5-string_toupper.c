#include "main.h"

/**
 * string_toupper - uppers a lower
 * @str: character to make upper
 * Return: return value of upper
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

	return (str);
}
