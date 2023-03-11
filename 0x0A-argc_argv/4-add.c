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
int i, j, sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
i = j = 1000;
break;
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
