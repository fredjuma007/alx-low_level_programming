#include <stdio.h>
/**
 * Description: main - prints alphabets in lower then in upper case
 *
 *Return: 0 if successful
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	putchar(a);
	for (a = 'A'; a <= 'Z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
