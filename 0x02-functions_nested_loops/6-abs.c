#include "main.h"

/**
 * _abs - Computes the absolute number of an integer.
 * @c: the number to be checked
 * Return: Absolute value of number or  0 .
 */

int _abs(int c)
{

if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
else
{
return (c);
}

}
