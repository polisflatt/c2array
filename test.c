#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <array2d.h>

/* A library for managing multiple strings in a pseudo-2dimensional array */

/* Uses strtok() to simulate a 2-dimensional array. Real 2 dimensional arrays are dangerous, so use this one! But only if you have to. Keep it simple. This is C. */



int main()
{
    /* Not recommended */
    /* char array[255] = {NULL}; and yes, you do need {NULL}, to initalize it with zeroes, so that things don't get confused */

    /* Recommended way. Use char*; calloc is also recommended */

    char* array = calloc(255, sizeof(char)); /* Make sure you allocate the right amount of memory! */

    /* Also, make sure you are using a pointer, so you can """dynamically""" increase the memory allocation, if needed. Major drawback occurs if only using arrays, but you can use them if needed. */


    A(array, "Hello, world!"); /* There are macros you can use to shorten the function name. Find them in the headers */
    A(array, "Bonjour, mon ami!");
    A(array, "Hallo, mein freund!");

    /* To print all array items, to test it */

    print_items(array);

    /* To manually loop through it, using a for loop. */


    for (int i = 0; i < L(array); i++) /* L meaning: get_items(), which returns the number of items. DOES NOT COUNT FROM 0. */
    {
        printf("%d-> %s\n", i, I(array, i));
    }

    /* Manually retrieve item in array */

    printf("Here is the German message: %s\n", I(array, 2)); /* Counts from zero */




    /* Test strtok */

    char* array2 = calloc(512, sizeof(char));

    char message[] = "The quick brown fox jumped over the lazy dog."; /* Yes, I must do this. Strtok doesn't like const char*'s... */

    char* token = strtok(message, " "); /* Each array item will be a word. */

    while (token != NULL) 
    {
        A(array2, token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < L(array2); i++)
    {
        printf("%s\n", get_item(array2, i));
    }

    return 0;
}
