#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')     /* Base case: end of string */
return (0);       /* Return 0 to indicate end of recursion */

return (1 + _strlen_recursion(s + 1)); /* Recursive call for next character */
}
