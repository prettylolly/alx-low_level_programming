#include <tdio.h>

/**
 * main - main block 
 * Description - prints the alphabet in lowercase,
 *
 * Retur: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
