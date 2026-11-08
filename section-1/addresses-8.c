#include <stdio.h>

// & Understanding to use %c to get a character or address of that character

int main(void)
{
    // ~ Declare a variable that will house a string
    char *s = "HI!";

    // ~ Print out a specific character/address of a character from string "HI!" -> treating 's' as an array
    // printf("%c\n", s[0]);
    // printf("%c\n", s[1]);
    // printf("%c\n", s[2]);

    // ~ Print out the first character in the array by using *s instead of using s[0]
    // printf("%c\n", *s);
    // ~ Print out 2nd character in 's' which is similar to going to s and moving over one character
    // printf("%c\n", *(s + 1));
    //~ Print out the 3rd character in the array -> 's' + 2 characters away
    // printf("%c\n", *(s + 2));

    // ~ Print out 3 different strings -> sequence of characters that start at different characters
    // ~ Print out the string that starts at s
    printf("%s\n", s);
    // ~ Print out the string that starts at s + 1
    printf("%s\n", s + 1);
    // ~ Print out the string that starts at s + 2
    printf("%s\n", s + 2);
}

