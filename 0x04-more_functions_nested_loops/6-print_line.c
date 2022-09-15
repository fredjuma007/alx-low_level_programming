#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: integer to print stuff?
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
