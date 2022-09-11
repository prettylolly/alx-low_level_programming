#include <stdio.h>
/**
 * main - entry point
 *
 * Descriptin:prints the sizes of varius types of data on the computer
 * 
 * Return: 0
 */

int main(void)
{
	printf("size of a cha: $d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);

}
