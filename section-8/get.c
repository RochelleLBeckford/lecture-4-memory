#include <cs50.h>
#include <stdio.h>

// & Program that uses get_int() to get an int from the user
int main(void)
{
    // ~ Declare an int that will get the value from the user
    int n = get_int("n: ");
    printf("n: %i\n", n);
}
