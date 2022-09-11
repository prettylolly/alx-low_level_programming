#include <stdli.h>
#include <time.h>
#include <sttdio.h>

/**
 * main - determine if a number is positive,negative or zero
 *
 * Return: always 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = ramd() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n)
	}
	return (0);
  }
