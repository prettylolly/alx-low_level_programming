#include stdio.h>

/**
 * main -main block
 *
 * Description: prints in alphabets in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
		putchar('\n');
		return (0);
}
