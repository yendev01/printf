#include "main.h"

/**
  * _printf - function that produces output according to a format
  * @format: ....
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*p)(va_list);

	va_start(args, format);
	
	while(*format)
	{
		if (*format && *format != '%')
		{
			_putchar(*format);
			count++;
		}
		if (*format == '\0')
			return (count);

		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (count);

			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				p = get_whattoprint(format);

				if (p != NULL)
					count += p(args);
				else
				{
					_putchar(*format);
					count++;

				}
			}
		}
		format++;
	}

	va_end(args);
	return(count);
}
