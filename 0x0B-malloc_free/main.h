#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
int free_grid(int **grid, int height);

#endif
