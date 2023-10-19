#include "main.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: to be checked
 *@src: to be checked
 *@n: number of bytes to concatenates
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0; i < n && *src != '\0'; i++)
{
dest[len + i] = *src;
src++;
}
dest[len + i] = '\0';
return (dest);
}
