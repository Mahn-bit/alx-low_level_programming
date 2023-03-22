#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the res digit of a number.
 * @n: the input number.
 * Return:res digit of a number.
 */
int print_last_digit(int n)
{
long int m = n;
int res;
if (m < 0)
m = -m;
res = m % 10;
_putchar(res + '0');
return (res);
}
