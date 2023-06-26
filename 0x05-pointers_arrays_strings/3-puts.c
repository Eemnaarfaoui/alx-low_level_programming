#include <stdio.h>
#include <string.h>
/**
* _puts - Prints a string followed by a new line to stdout.
* @str: Pointer to the string to be printed.
*
* Description: This function takes a pointer to a string and
*              prints the string to the standard output (stdout)
*              followed by a new line character.
*/
void _puts(char *str)
{
if (str == NULL)
{
return;
}

int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}

putchar('\n');
}
