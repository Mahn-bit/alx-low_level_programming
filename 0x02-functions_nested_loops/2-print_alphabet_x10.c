#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
int j;
char letter;
for (j = 0; j < 10; j++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
