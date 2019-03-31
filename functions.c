#ifndef __FUNCTIONS_C
#define __FUNCTIONS_C

#include <string.h>
#include <stdio.h>

#include "settings.h"


void append_item(char array[], char* item)
{
    /* Append item to our array */
    
    /* Convenient function so people don't have to do it manually! Very simple! */
    
    strcat(array, item);
    strcat(array, SEP);
}

char* get_item(void* array, int index)
{
    char array_c[strlen(array)];  
    /* Create copy; strtok modifies/corrupts our array */
    
    strcpy(array_c, array);
    
    char* token = strtok(array_c, SEP);
    
    int n = 0; /* Keep count */
    
    char* token_c;
    
    while (token != NULL)
    {

        if (n == index) /* When we loop to our index, we stop and return our value */
        {
            token_c = (char*) malloc(strlen(token));
            strcpy(token_c, token);
            break;

            /* I do not return here, because that breaks many things */
        }
        
        token = strtok(NULL, SEP);
        /* Continue onto the next item! */
        
        n++;
    
    }
    
    return token_c;
}

size_t get_items(void* array)
{
    char array_c[strlen(array)]; /* Same as before */
    
    strcpy(array_c, array);
    
    char* token = strtok(array_c, SEP);
    
    int count = 0;
    
    while (token != NULL)
    {
        /* But.... We are taking count, this time! */

        count++;
        token = strtok(NULL, SEP);
    }
    

    return count;
}

void print_items(void* array)
{
    /* Simple for-loop. You know what is going on... */

    for (int i = 0; i < get_items(array); i++)
    {
        printf("%d: %s\n", i, get_item(array, i));
    }
}


#endif 