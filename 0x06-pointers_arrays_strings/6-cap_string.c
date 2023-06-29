#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
int i = 0;

/* Capitalize the first character of the string */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

/* Iterate through each character in the string */
while (str[i] != '\0')
{
/* Check if the current character is a separator */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
/* Capitalize the next character if it is a lowercase letter */
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
}

i++;
}

return (str);
}
