#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 * main - copies content of one file to another
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *buffer = malloc(1024);
int fp, des, close1, close2;
ssize_t r = 0, w;
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
fp = open(argv[1], O_RDONLY);
if (fp == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
des = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (des == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
r = read(fp, buffer, 1024);
w = write(des, buffer, r);
if (w != r)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
free(buffer);
close1 = close(fp);
close2 = close(des);
if (close1 == -1 || close2 == -1)
{
dprintf(2, "Error: Can't close fd %d\n", close2);
exit(100);
}
return (0);
}

