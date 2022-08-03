#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 * Auth: OUMAROU K. harissou
 */

#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif