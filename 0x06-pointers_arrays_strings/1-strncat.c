#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * _strncat - function that concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 * Return: dest
 */
char *_strncat(char *dest, const char *src, int n)
{
int len = 0;
int i;

while (dest[len] != '\0')
len++;
{
for (i = 0; i < n && src[i] != '\0'; i++)
dest[len + i] = src[i];
=======
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
>>>>>>> 6496878a2b3ef64eb01a3bbc9b1ecb4a166fbb1d
}
dest[len + i] = '\0';
return (dest);
}
