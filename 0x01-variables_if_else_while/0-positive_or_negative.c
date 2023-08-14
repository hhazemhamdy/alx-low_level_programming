#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return : Always  0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
		printf("positive\n", n);
	else if (n == 0)
		printf("zero\n", n);
	else
		printf("negative\n", n);
	return (0);
}
