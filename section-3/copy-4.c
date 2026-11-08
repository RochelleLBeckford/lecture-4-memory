#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// & Understanding that in cases of error a NULL value can be returned and the program should end if it does
int main(void)
{
    // ~ Declare a variable and prompt the user for a string
    char *s = get_string("s: ");
    // ~ Should be checking if the return value is NULL if so abort the program all together
    if (s == NULL)
    {
        // ~ 1 signifies error
        return 1;
    }

    // ~ Malloc will return the address of a chunk of memory -> + 1 is needed to get the null character that ends a string
    // ~ Asking the computer for memory but it is never giving them back to comp. (free up that memory) -> in long running programs (servers, things running for a long time) will get slower and slower over time b/c comp. thinks that that it is running out of memory even if it is not actively in use
    char *t = malloc(strlen(s) + 1);
    // ~ Should also be checking malloc if the return value is NULL
    if (t == NULL)
    {
        // ~ Return 1 for error b/c something went wrong
        return 1;
    }

    // ~ Passing in the destination followed by the source string
    strcpy(t, s);

    // ~ What if the user types enter aka an empty string -> if nothing here will be 0 which is the NULL character which should not be trying to capitalize
    // t[0] = toupper(t[0]);
    // ~ Only if the string length is greater than 0 should bother to uppercase that the first character of that string
    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // ~ To give back the memory asked from malloc -> to free it up
    // ~ Pass in the address allocated previously so that the operator puts that memory back
    free(t);
}
