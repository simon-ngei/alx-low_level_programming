#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i;

while (dest[len] != '\0')
{
len++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}

dest[len + i] = '\0';

return dest;
}
