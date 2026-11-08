#include <stdio.h>

// & Use & operator to get the address of a variable in memory and * to store the address of an integer

int main(void)
{
    int n = 50;
    int *p = &n;

    // ~ Use * to print out not p, but n, but by using p
    // ~ * before a variable = dereference operator -> go to the address in memory
    printf("%i\n", *p);
}
