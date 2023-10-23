#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;
=======
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

>>>>>>> 6496878a2b3ef64eb01a3bbc9b1ecb4a166fbb1d
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
