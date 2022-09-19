#include "main.h"
#include <stdlib.h>

/**
 * _isupper - entry point
 *
 * Description : checks for upper case of the alphabets
 *
 *@c :  alphabets to be checked
 *
 * Return: 1 if c is upper else 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
