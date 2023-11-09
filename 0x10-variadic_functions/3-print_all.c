#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - print argument provided to function
 *@format: the argument specifier
 *Return: any argument given based on specifier
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list spc;
va_start(spc, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'i':
printf("%s%d", sep, va_arg(spc, int));
break;
case 'f':
printf("%s%d", sep, va_arg(spc, int));
break;
case 'c':
printf("%s%c", sep, va_arg(spc, int));
break;
case 's':
str = va_arg(spc, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
printf("\n");
}
}
