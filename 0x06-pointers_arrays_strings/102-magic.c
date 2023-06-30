#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a[5];

	a[2] = 1024;
	printf("a[2] = %d\n", a[2]);

	n = 98;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
	a[2] = n;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
