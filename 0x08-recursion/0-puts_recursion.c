#include "main.h"
/**
 *_puts_recursion - function that prints a str, followed by a new line
 *@s: character to be checked
 *Return: void
 */

void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
}
