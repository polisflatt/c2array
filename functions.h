#ifndef __FUNCTIONS_H
#define __FUNCTIONS_H

#include <stdio.h>
#include <string.h>

#include "settings.h"

#include "functions.c"

#define I(x, y)     get_item(x, y)
#define L(x)        get_items(x)
#define A(x, y)     append_item(x, y)



void append_item(char array[], char* item); /* Append an item to the array */
char* get_item(void* array, int index); /* Get item */
void print_items(void* array); /* Prints array items in a neat fashion. For experimental/developmental purposes... */
size_t get_items(void* array); /* Get count of items. Useful for for-loops and alike */

#endif