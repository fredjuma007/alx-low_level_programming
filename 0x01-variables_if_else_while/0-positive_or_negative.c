#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description:main - assign a random to the var n each time it is run
 *
 * Return: 0 if success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
