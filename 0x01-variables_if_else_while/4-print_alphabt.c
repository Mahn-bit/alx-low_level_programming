#include <stdio.h>
#include <ctype.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
if (alpha[i] == 'q' || alpha[i] == 'e')
continue;
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
