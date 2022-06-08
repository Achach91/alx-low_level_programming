#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet
 * Description: prints lower case alphabet
 * Return: void
 */

void print_alphabet(void)
{

	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
