#include "main.h"
/**
 *_isalpha - function that checks for alphabetic character
 *@c: the character to be checked
 *Return: return 1 if c is a letter,lowercase or uppercase or 0 if not
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
