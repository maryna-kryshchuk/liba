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

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

bool mx_isspace(char c);
void mx_strdel(char **str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
t_list *mx_create_node(void *data);
void *mx_memchr(const void *s, int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);


#endif


