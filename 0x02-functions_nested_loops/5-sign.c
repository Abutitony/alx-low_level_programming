#include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @n: parameter that is printed
 *
 * Return: 1 if parameter is greater than 0
 * else 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
