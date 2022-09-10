#include <stdio.h>
/**
 * Description: main -  prints all possible combinations of single-digit numbers
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int x;

	for (x = 10; x < 20; x++)
	{
		putchar((x % 10) + '0');
		if (x != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

	
