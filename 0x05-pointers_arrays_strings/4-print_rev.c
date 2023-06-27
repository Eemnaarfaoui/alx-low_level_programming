#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: Pointer to the string to be printed in reverse.
*
* Description: This function takes a pointer to a string and
*prints the string in reverse order to the standard output (stdout),
*followed by a new line character.
*/
void print_rev(char *s)
{
int length;
int i;

if (s == NULL)
{
return;
}

int length = strlen(s);

for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
