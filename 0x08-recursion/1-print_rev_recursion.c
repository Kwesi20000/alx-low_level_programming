#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')     /* Base case: end of string */
return;         /* Exit the function */

_print_rev_recursion(s + 1); /* Recursive call for next character */
_putchar(*s);               /* Print current character */
}
