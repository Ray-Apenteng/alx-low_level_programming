#include "main.h"
#include <ctype.h>

/**
 * _isdigit - prints numbers 0 through 9
 * @c: Character to be checked
 * Return: 1 if character is digit or o otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
