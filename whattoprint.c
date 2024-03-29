#include "main.h"

/**
  * get_whattoprint - gets what to print
  * @s: ...
  * Return: pointer to a function that can print
  */

int (*get_whattoprint(const char *s))(va_list)
{
	lfg list_print[] = {
		{"s", print_string},
		{"c", print_c},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}
	};

	int i, len = 6;

	for (i = 0; i < len; i++)
	{
		if (list_print[i].c[0] == *s)
			return (list_print[i].func);
	}
	return (NULL);
}
