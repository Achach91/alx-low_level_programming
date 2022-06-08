 #include "main.h"

 /**
  * print_alphabet - prints lowercase alphabet
  * Description: Print Alphabet
  *
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
