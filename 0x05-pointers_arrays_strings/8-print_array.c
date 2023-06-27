#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* Prints n elements of an array of integers, followed by a new line.
* @a: Pointer to the array of integers.
* @n: Number of elements to be printed.
*
*print_array Prints n elements of an array of integers, followed by a new line.
*elements of the array @a,separated by comma and space, followed by a new line.
*/
void print_array(int *a, int n)
{
int i;
if (a == NULL || n <= 0)
{
return;
}

for (i = 0; i < n; i++)
{
int num = a[i];
int divisor = 1;

if (num < 0)
{
putchar('-');
num = -num;
}

while (num / divisor >= 10)
{
divisor *= 10;
}

while (divisor != 0)
{
putchar('0' + num / divisor);
num %= divisor;
divisor /= 10;
}

if (i != n - 1)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
}
