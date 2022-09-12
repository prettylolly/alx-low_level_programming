#include <stdio.h>

/**
 * main -main block
 *
 * description: print all alphabets but skip q and e
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
