#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index.
 * @n: The input decimal number.
 * @index: The index of the bit to check (0-based).
 *Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;
if (index > 63)
return (-1);

value = (n >> index) & 1;
return (value);
}
