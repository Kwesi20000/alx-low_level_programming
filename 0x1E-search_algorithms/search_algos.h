#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif 
