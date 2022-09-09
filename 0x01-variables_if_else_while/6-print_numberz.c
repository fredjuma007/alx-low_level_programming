#include <stdio.h>
/**
 * Describe: main - prints single digit binay
 *
 * Return: 0 if successful
 *
 * dec_num is variable for the single decimal number
 *
 */
int main(void)
{
	int dec_num = 0;

	for (; dec_num < 10 ; dec_num++)
		putchar('0' + dec_num);
	putchar('\n');
	return (0);
}
