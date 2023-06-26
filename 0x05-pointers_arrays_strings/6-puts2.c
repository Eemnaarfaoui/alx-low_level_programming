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
int len, i;

len = 0

while (str[len] != '\0')
{
len++;
}

for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}

putchar('\n');
}
