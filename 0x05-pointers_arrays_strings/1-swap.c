#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: first character to be checked
 *@b: second character to be checked
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}

