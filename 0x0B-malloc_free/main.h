#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* putchar.c */
int _putchar(char c);

/* create_array.c */
char *create_array(unsigned int size, char c);

/* _strdup.c */
char *_strdup(char *str);

/* str_concat.c */
char *str_concat(char *s1, char *s2);

/* alloc_grid.c */
int **alloc_grid(int width, int height);

/* free_grid.c */
void free_grid(int **grid, int height);

/* strtow.c */
char **strtow(char *str);

#endif /* MAIN_H */

