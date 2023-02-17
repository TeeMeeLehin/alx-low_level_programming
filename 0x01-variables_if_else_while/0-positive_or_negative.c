#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * This function generates random number btw -RAND_MAX/2 and +RAND_MAX/2, and
 * prints message to console indicating whether the number is positive,
 * negative, or zero then returns 0 to indicate that the program has completed
 * successfully.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
