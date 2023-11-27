#include "main.h"
/**
  * create_file - creates a file.
  * @filename: pointer to filename.
  * @text_content: string to be written to file.
  *
  * Return:  1 on success -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
int file, j, r;

if (filename == NULL)
return (-1);
file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (file == -1)
return (-1);

if (text_content)
{
j = 0;
while (text_content[j])
j++;
r = write(file, text_content, j);
if (r != j)
return (-1);
}

close(file);
return (1);
}
