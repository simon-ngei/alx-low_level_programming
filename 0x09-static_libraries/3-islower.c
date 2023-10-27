#include "main.h"
/**
 *_islower - function that cheks for lowercase character
 *@c: The character to be checked
 *Return: 1 if is a lowercase or 0 if not
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
