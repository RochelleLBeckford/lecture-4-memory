#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// & Use the functions already in C to copy strings
int main(void)
{
    // ~ Declare a variable and prompt the user for a string
    char *s = get_string("s: ");

    // ~ Malloc will return the address of a chunk of memory & + 1 b/c need to get the null character
    char *t = malloc(strlen(s) + 1);

    // ~ Do not need a for loop as long as I have actually enough memory for the string
    // ~ use strcpy function, passing in the destination and the source string -> will copy the bits in s into t
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
