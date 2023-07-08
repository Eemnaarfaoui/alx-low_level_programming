#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main-entry point
*description: 'get the last digit of a number'
*Return: always 0
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
/* your code goes there */
printf("Last digit of %d is %d ", n, ld);
if (ld > 5)
{
printf("and is greater than 5");
}
if (ld == 0)
{
printf("and is 0");
}
if (ld < 6 && ld != 0)
{
printf("and is less than 6 and not 0");
}

printf("\n");
return (0);
}
