#include <stdio.h>

/**
 * This is the main function of the program.
 * It init var, calculates the sum of even-valued Fibonacci terms up to 4M,
 * and prints the result to the console.
 *
 * @return 0 on successful program execution.
 */
int main(void)
{
int i;
unsigned long int j, k, next, sum;

j = 1;
k = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}

printf("%lu\n", sum);

return 0;
}
