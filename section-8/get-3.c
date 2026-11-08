#include <stdio.h>

// & Program to get a string from the user
int main(void)
{
    // ~ Since cs50 library is no longer being use will use char instead of string
    // ~ Give me a variable that will store a string
    // ~ char *s -> is already a pointer
    // ~ s right now is a garbage value b/c no = value involved
    // ~ Putting a string at a bogus place in memory
    // ~ Have to put a line in the sand and say "Hey you can only put this amount of characters or no more than a certain # of characters"
    char *s = malloc(4);

    // ~ Print out the prompt to prompt the user for s
    // ~ User can safely type in HI! w/ space for the NULL (\0) character
    // ~ Or s can be an array of 4 -> s[4];
    printf("s: ");

    // ~ Scan from the users keyboard a string with %s and put it at location s
    // ~ Want to pass in the address of string
    scanf("%s", s);
    // ~ Or not use scanf() at all

    // ~ Print out the value of s
    printf("s: %s\n", s);
}
// ~ Long story short do not use C for getting the user input unless ready to implement complexity itself (deal with user inputs)
