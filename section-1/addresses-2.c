#include <stdio.h>

// & Use ampersand (&) operator to get the address of a variable in memory
int main(void)
{
    int n = 50;
    // ~ &n instead of just n
    // ~ Do not use %i to display that number but %p to display an address of something in memory
    // printf("%i\n", &n);
    printf("%p\n", &n);
}

