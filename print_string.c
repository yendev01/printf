#include "main.h"

/**
  * print_string - prints string
  * @input:...
  * Return: number of characters printed
  */


int print_string(va_list input)
{
	int count = 0;
	char *string;

	string = va_arg(input, char *);
	if (string == NULL)
		string = "(null)";
	while (string[count])
	{
		_putchar(string[count]);
		count++;
	}

	return (count);
}

/**
  * print_c - print char
  * @input: ...
  * Return: ...
  */

int print_c(va_list input)
{
	char my_char;

	my_char = va_arg(input, int);
	if (my_char)
	{
		_putchar(my_char);
		return (1);
	}
	return (0);
}
