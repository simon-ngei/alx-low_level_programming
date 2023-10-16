#include "main.h"
/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: string to be checked
 *Return: string and new line
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
putchar(str[i]);
putchar('\n');
}
