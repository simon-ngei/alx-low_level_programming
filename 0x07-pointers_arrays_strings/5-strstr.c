#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: the string to be searched
 *@needle: the substring to be located
 *Return: if the substr is loc - a poi to the benng of the located substr
 *If the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == 0)
return (haystack);
while (*haystack)
{
index = 0;

if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
