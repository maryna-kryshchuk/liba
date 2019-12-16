#ifndef LIBMX_H
#define LIBMX_H
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);

#endif


