#include <stdio.h>

// & Use the ampersand (&) operator to get the address of a variable in memory and the asterisk (*) to store the address of an integer

int main(void)
{
    int n = 50;
    int *p = &n;

    // ~ Print out the value of p itself b/c p is now equivalent to &n
    printf("%p\n", p);
}
