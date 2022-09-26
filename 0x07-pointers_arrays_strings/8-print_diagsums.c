#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */

void print_diagsums(int *a, int size)
{
	int x;
	int diag1 = 0;
	int diag2 = 0;

	for (x = 0; x < size; x++)
	{
		diag1 += a[(x * size) + x];
		diag2 += a[(size - 1) + ((size - 1) * x)];
	}
	printf("%d, %d\n", diag1, diag2);
}
