#include <stdio.h>

/**
 * positive_or_negative -checks i is positive or negative
 *
 * @i: the integer input
 *
 * Reurn: void
*/

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
