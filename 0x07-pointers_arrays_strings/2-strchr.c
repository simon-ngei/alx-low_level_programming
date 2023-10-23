#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: the string to be searched
 *@c: the character to be searched.
 *Return: if c is not found - a pointer to the first occurrence.
 * If c not found -NULL.
 */
char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
