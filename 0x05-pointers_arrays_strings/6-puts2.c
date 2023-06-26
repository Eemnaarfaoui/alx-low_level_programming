#include <stdio.h>
#include <string.h>
/**
*puts2-prints every character of a string,starting with the first character.
* @str: Pointer to the string.
*
*Description: This function takes a pointer to a string and
*prints every other character of the string, starting with the first character,
*to the standard output (stdout), followed by a new line character.
*/
void puts2(char *str)
{
int i = 0;

if (str == NULL)
{
return;
}

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}

putchar('\n');
}
