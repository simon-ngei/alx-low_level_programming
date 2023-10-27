#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiple two numbers
 *@argc: number of command line arg
 *@argv: the array that contains the command line
 *Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
