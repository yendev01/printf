#include "main.h"

/**
  * print_b - prints binary
  * @input: ...
  * Return: count
  */


int print_b(va_list input)
{
	int i, count = 0;
	unsigned int integer, num;

	integer = va_arg(input, unsigned int);

	for (i = (sizeof(integer) * 8); i >= 0; i--)
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
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
