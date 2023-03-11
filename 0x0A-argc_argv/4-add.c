#include "main.h"
/**
 * main - add all integer arguments
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("%d\n", 0);
}
else
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i]))
{
printf("Error\n");
return (1);
break;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
