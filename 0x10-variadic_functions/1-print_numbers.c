#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, abc;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
abc = va_arg(ptr, int);
printf("%d", abc);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
