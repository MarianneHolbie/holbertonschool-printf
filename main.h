#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct typeprint- Struct tp
 * @vp: variable to print
 * @f: associate function
 */
typedef struct typeprint
{
        char *vp;
        void (*f)(va_list);
} typ;

/* f° qui appelle la f°print correspondante au char */
int _printf(const char *format, ...);

/* f° qui print %s */
void pr_s(va_list to_match);

/* f° qui print %c */
void pr_c(va_list to_match);

/* f° qui print %d ou %i */
void pr_di(va_list to_match);

/* f° qui print % si presence de %, %% ou \% */
void pr_p(va_list to_match);

/* f° putchar like */
int _putchar(char c);

#endif
