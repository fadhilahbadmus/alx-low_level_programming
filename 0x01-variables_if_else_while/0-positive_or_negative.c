#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - this prints result
  *Return: returns zero
  */

int main(void)
{
	int n;

	n = 0;
	n < 0;
	n > 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Enter any Number %d\n", n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
