#include "main.h"

/**
 * main - entry point 
 *
 * description: prints _putchar followed by a new line
 *
 * Return: 0
 *
 */
int main(void)
{
	char printer[] = "_putchar";
	int i = 0;

	while (printer[i] != '\0')
	{
		_putchar(printer[i]);
		i++;
	}
	_putchar('\n')
	return (0);
}
