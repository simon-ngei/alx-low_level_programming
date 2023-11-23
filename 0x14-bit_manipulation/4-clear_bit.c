#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the input integer where the bit will be cleared.
 * @index: The index of the bit to clear (0-based, from right to left).
 * Return: 1 if the operation was successful or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int p = *n;
unsigned long int std;
if (index > 63)
return (-1);
if (!n)
return (-1);
std = 1 << index;
std = ~std;
p = p & std;
*n = p;

return (1);
}
