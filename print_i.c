#include "main.h"

int print_int(long int integer, int m, int count);
/**
  * print_i - function
  * @input: ...
  * Return: returns int
  */
int print_i(va_list input)
{
	int m = 0, count = 0;
	long int integer;

	integer = va_arg(input, int);
	if (integer == 0)
	{
		_putchar('0');
		return (1);
	}

	else
	{
		if (integer < 0)
		{
			_putchar('-');
			integer = -1 * integer;
			count++;
		}
		count = print_int(integer, m, count);
		return (count);
	}
}

/**
  * print_int -function
  * @integer: ..
  * @count: ...
  * @m: ...
  * Return:...
  */

int print_int(long int integer, int m, int count)
{

	if (integer > 9)
	{
		m = integer % 10;
		integer = integer / 10;
		count = (1 + print_int(integer, m, count));
		_putchar(m + '0');
		return (count);
	}
	else
	{
		_putchar(integer + '0');
		return (count + 1);
	}
}
