#include "main.h"
/**
 * changer - computes no. of bills needed for change
 * @m: the given amount, an integer
 *
 * Return: int
 */
int changer(int m)
{
int bills[] = {25, 10, 5, 2, 1};
int i, res, bill, mod;
for (i = 0; i < 5; i++)
{
if (m >= bills[i])
{
bill = bills[i];
break;
}
}
res = m / bill;
mod = m % bill;
if (mod == 0)
{
return (res);
}
else
{
res += changer(mod);
}
return (res);
}
/**
 * main - compute number of bills needed for change
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int money;
if (argc != 2)
{
printf("Error\n");
return (1);
}
money = atoi(argv[1]);
if (money < 0)
{
printf("%d\n", 0);
}
else
{
int change;
change = changer(money);
printf("%d\n", change);
}
return (0);
}
