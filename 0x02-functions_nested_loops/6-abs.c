#include "main.h"
/**
 * _abs - returns the absolute value of a number.
 * @n: the input to return absolute.
 * Return:n without signs.
 */
int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (-1 * n);
else
return (0);
}
