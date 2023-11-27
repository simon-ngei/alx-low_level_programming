#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *read_textfile - Reads a text file
 *@filename: Pointer to the function
 *@letters: Number of letters to read and print
 *Return: Number of letters read and printed on success, else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, file, b;
char *text;

text = malloc(letters);
if (text == NULL || filename == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file == -1)
{
free(text);
return (0);
}

a = read(file, text, letters);
if (a == -1)
{
free(text);
close(file);
return (0);
}

b = write(STDOUT_FILENO, text, a);
if (b == -1)
{
free(text);
close(file);
return (0);
}

free(text);
close(file);
return (b);
}
