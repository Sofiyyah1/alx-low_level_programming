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
		n = n * -1;
	a = n % 10;
	if (a < 0)
		a = -a;

	_putchar(last + '0');

	return (last);
}
