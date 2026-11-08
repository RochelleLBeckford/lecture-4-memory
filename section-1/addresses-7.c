// ~ If remove <cs50.h> library an error will arise since it tells the computer what string is
// #include <cs50.h>
#include <stdio.h>

// & Understanding that "char*" is the same thing thing as using "string"

int main(void)
{
    // ~ Declare a variable that will house a string
    // string s = "HI!";
    // ~ If no cs50 library installed on this computer can use char* instead
    char *s = "HI!";

    // ~ Print out s itself
    printf("%s\n", s);
}
