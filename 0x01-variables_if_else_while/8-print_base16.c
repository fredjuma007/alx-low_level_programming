#include <stdio.h>
/**
 * Descript: main - prints all the hexadecimal numbers in lower
 *
 * Return: 0 If successful
 *
 */
int main(void)
{
	unsigned char hEX = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(hEX);
		hEX++;
	}
	hEX = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + hEX);
		hEX++;
	}
	putchar('\n');
	return (0);
}

