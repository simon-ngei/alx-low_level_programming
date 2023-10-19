#include "main.h"
/**
 *main - entry point
 *0: is the number to be cheked
 *Return: always 0
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
if (i < 0)
{
 printf("%d is negative\n", i);
}
return;
}
