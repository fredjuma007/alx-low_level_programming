#include <stdio.h>
/**
 * Description: main - print lower case of the alphabet
 *
 * Return: 0 if successful
 *
 */
int main()
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
