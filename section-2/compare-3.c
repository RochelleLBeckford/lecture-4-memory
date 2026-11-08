#include <cs50.h>
#include <stdio.h>
// ~ add string.h library to gain access to strcmp -> to be able to compare strings character by charater
#include <string.h>

// & Comparing strings given by the user character by character
int main(void)
{
    // ~ Prompt the user for the 1st and 2nd strings
    // string s = get_string("s: ");
    // string t = get_string("t: ");

    // ~ string s is actually char *s
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // ~ If the string comparison of s & t == 0 (meaning they are equal) then print Same. If not then print Different
    // if (strcmp(s, t) == 0)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }

    // ~ Print out the address in memory of s & t -> should see two different addresses
    printf("%p\n", s);
    printf("%p\n", t);
}
