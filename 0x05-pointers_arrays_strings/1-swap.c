#include "main.h"
#include <stdio.h>
/**
* swap_int - Swaps the values of two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Description: This function takes two pointers to integers, `a` and `b`,
*              and swaps the values they point to. The value pointed to by `a`
*              will be exchanged with the value pointed to by `b`.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
