#include <cs50.h>
#include <stdio.h>

// & Strings to print out the address in memory and

int main(void)
{
    // ~ Declare a variable that will house a string
    string s = "HI!";

    // ~ Print out the address (pointer) in memory of variable s
    printf("%p\n", s);
    // ~ Print out the address of the 1st character in that string
    //~ ampersand here will get me the address of that character
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

