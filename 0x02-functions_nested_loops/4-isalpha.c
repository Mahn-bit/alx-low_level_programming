#include "main.h"
/**
 * _isalpha - checks for  letter, lowercase or uppercase.
 * @c: the input to checked.
 * Return: 1 if the input c is s a letter, lowercase or uppercase 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
