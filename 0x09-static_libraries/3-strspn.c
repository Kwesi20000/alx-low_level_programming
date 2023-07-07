#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the characters to be accepted
 *
 * Return: Number of bytes in the initial segment of s consisting only of bytes
 *         from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int found;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found == 0)
break;
count++;
}

return (count);
}
