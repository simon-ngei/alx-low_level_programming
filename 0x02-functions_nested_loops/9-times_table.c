#include "main.h"
/**
 *times_table - function that prints the 9 times table, starting with 0
 *Return: empty output
 */
void times_table(void)

{

int u, v, w, x, z;
{
for (u = 0; u <= 9; u++)
{
for (v = 0; v <= 9; v++)
{
w = u * v;
if (w > 9)
{
x = w % 10;
z = (w - x) / 10;
_putchar(44);
_putchar(32);
_putchar(z + '0');
_putchar(u + '0');
}
else
{
if (v != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(w + '0');
}
}
_putchar('\n');
}
}
}

