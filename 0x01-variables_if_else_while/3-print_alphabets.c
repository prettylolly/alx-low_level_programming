#include <stdio.h>

/**
 * main -main block
 * Description:prints the alphabet in lowercase, anduppercase
 * followed by a new line
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);

