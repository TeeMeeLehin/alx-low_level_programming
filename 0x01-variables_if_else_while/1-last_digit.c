#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the progra
 * This function generates a random number
 * extracts the last digit of the number
 * and prints a message to the console
 * indicating whether the last digit is greater
 * than 5, equal to 0, or less than 6 but not 0.
 * It then returns 0 to indicate that
 * the program has completed successfully.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0)); /* Set the seed for the random number generator */
n = rand(); /* Generate a random number */
last_digit = n % 10; /* Extract the last digit of the number */
printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
return (0);
}
