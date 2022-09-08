#include <stdio.h>
/**
 * main-entry point
 *
 * return:ALways zerro if success
 */
int main(void)
{
	printf("Size of a char:%d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n",sizeof(long long int));
	printf("SIze of long long int: %d byte(s)\n",sizeof(long long int));
	printf("SIze of a float: %d byte(s)\n",sizeof(float));
	return(0);
}
