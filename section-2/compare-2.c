#include <cs50.h>
#include <stdio.h>
// ~ add string.h library to be able to use strcmp -> to compare strings character by character
#include <string.h>

// & Comparing strings given by the user
int main(void)
{
    // ~ Prompt the user for the 1st string
    string s = get_string("s: ");
    // ~ Prompt the user for the 2nd string
    string t = get_string("t: ");

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    // ~ Even though the user did input the same strings what output to the terminal was "Different". To solve this have to compare character by character using strcmp
}
