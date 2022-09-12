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
	it ch;

	for (ch = 'a'; ch <'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchchar('\n');
	return (0);
}
