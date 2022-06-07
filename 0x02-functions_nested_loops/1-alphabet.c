#include "main.h"

/**
 * print_alphabet - print alphabet;
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{

		_Putchar(letter);
		letter++;
	}
	_Putchar('\n');
}
