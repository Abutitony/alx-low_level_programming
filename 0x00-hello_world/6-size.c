#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sizeChar = '1'
	int sizeint = 4
	long int sizeLongint = 4
	long long int sizeLongLongint = 8
	float sizeFloat = 4.0

	printf("Size of a char: %lu byte(s)", sizeChar);
	printf("Size of an int: %lu byte(s)", sizeint);
	printf("Size of a long int: %lu byte(s)", sizeLongint);
	printf("Size of a long long int: %lu byte(s)", sizeLongLongint);
	printf("Size of a float: %lu byte(s)", sizeFloat);
	return (0);

}
