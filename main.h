#ifndef LIST_H
#define LIST_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_whattoprint(const char *s))(va_list);
int print_string(va_list input);
int print_c(va_list input);


typedef struct myStruct {
	char *c;
	int (*func)(va_list);
} lfg;

#endif
