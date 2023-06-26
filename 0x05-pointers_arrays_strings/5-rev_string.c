#include <stdio.h>
#include <string.h>
/**
* rev_string - Reverses a string.
* @s: Pointer to the string to be reversed.
*
* Description: This function takes a pointer to a string and
*              reverses the order of characters in the string in-place.
*/
void rev_string(char *s)
{
if (s == NULL)
{
return;
}

int length = strlen(s);
int i = 0;
int j = length - 1;

while (i < j)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
