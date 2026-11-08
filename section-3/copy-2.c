#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
// ~ To gain access to malloc function need this library -> standard library (stdlib.h)
#include <stdlib.h>
#include <string.h>

// & Use the functions malloc and free to copy two strings in memory
int main(void)
{
    // ~ Declare and variable and prompt the user for a string
    char *s = get_string("s: ");

    // ~ To make a copy of s -> will need to ask the computer for as much memory as s itself takes up
    // ~ malloc will return the address of a chunk of memory -> HI! -> ask for 4bits including the null character
    // ~ malloc will return the address of the 1st bit in memory
    // ~ silly to hardcode a number -> better to make it more dynamic using strlen + 1 to get the length of s
    // ~ + 1 -> b/c need to get the null character
    // char *t = malloc(4);
    char *t = malloc(strlen(s) + 1);

    // ~ To copy s into t
    // ~ How ever since strlen always returns the actual length of the string not including the null character so it will forget to copy the null character -> this must be fixed and make it dynamic
    // ~ To go up and through the value of s -> w/ <=will start at 0 and include 4 characters
    // for (int i = 0; i < strlen(s); i++)
    // ~ Also dumb to ask the computer what is the length of s at every iteration -> so set another variable = to that string length then keep comparing i against that variable
    // ~ Means not to call functions wastefully as before
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        // ~ Set the ith value of t = to the ith value of s -> copy every character from s into t
        t[i] = s[i];
    }
    // ~ Capitalized just the 1st character of t
    t[0] = toupper(t[0]);

    // ~ Print out the value of s itself
    printf("s: %s\n", s);
    // ~ Print t itself to see that it is only capitalized
    printf("t: %s\n", t);
}
