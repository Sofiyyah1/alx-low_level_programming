#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is a integer
 * Description: prints the last digit of a numbet
 * Return: integer
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	_putchar(a + '0');

	return (a);
}
