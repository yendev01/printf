#include "main.h"

/**
  * print_b - prints binary
  * @input: ...
  * Return: count
  */


int print_b(va_list input)
{
	int i, count = 0;
	int num;
	unsigned int integer;

	integer = va_arg(input, unsigned int);

	for (i = 63; i >= 0; i--)
	{
		num = integer >> i;
		if (num & 1)
		{
			_putchar('1');
			count++;
		}

		else
		{
			if (count == 0)
				continue;
			else
			{
				_putchar('0');
				count++;
			}
		}

	}
	if ((count == 0) | (integer == 0))
	{
		_putchar('0');
		count++;
	}
	return (count);
}
