#include <stdio.h>
/**
 * Description: main - prints the alphabets in lower case except 'q' and 'e'
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);

	}
	putchar('\n');
	return (0);
}
