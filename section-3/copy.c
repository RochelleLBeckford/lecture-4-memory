#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// & Copy two strings in memory
int main(void)
{
    // ~ Prompt the user for a string
    // string s = get_string("s: ");
    // ~ Remove training wheels "string" -> s is the address of the string the user types in
    char *s = get_string("s: ");

    // ~ Try to copy s into a new variable t
    // string t = s;
    // ~ Remove training wheels "string" - the copy of the address of the string that the user typed in
    char *t = get_string("t: ");

    // ~ Treat t as an array and use toupper function from ctype library to pass in that character at that index specified to uppercase of the character in the array
    // ~ So t would be capitalized instead of s
    // t[0] = toupper(t[0]);

    // ~ Instead of using array notation can say go to address of 1st character of t -> exactly the same instead of using syntactic sugar of the square brackets and that it why HI! is being capitalized for both versions the original and the copy
    t[0] = toupper(*t);

    // ~ Print out the value of s at this point in time
    printf("s: %s\n", s);
    // ~ Print out the value of t at this point in time
    printf("t: %s\n", t);
}
