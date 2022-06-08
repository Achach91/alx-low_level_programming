 #include "main.h"

 /**
  * print_alphabet - prints lower case alphabet
  * Description: print lower case alphabet
  * Return: void.
  */

void print_alphabet(void)
{

	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
