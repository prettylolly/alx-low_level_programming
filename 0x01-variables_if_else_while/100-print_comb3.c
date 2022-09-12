nclude <stdio.h>

/**
 * main - print combination
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchat(n);
				purchase(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
