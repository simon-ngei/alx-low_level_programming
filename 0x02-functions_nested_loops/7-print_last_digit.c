#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@d: digit to be checked
 *Return: d
 */

int print_last_digit(int d)

{
int last;

last = d % 10;
if (last < 1)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
