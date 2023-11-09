#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Returns the sum of all its parameters
 *@n: the number of parameters passed to the function.
 *@...: a variable number of parameter to calculate the sum
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (n == 0)
{
return (0);
}
else
{
sum += va_arg(ap, int);
}
}
va_end(ap);
return (sum);
}
