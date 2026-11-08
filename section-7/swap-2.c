#include <stdio.h>

// & Good program that will swap to variables by going to the address of the copies so that the original values will be swapped as well

/*
~ Prototype -> telling the compiler that this function will exists later on in the file ( a promise that it will be defined)
~ Passing in by reference instead of value so that the original values will be swapped as well not just the copies
    ~ Change a  b to be addresses of integers
    ~ a will be an address of an int, b will be an address of an int
*/
void swap(int *a, int *b);

int main(void)
{
    // ~ Set the variables x & y
    int x = 1;
    int y = 2;

    // ~ Print out the value of x & y
    printf("x is %i, y is %i\n", x, y);
    // ~ Call the swap() that will swap the values of x & y
    // swap(x, y);
    // ~ Need to pass in the address of x & the address of y -> the ampersand (&) to pass in these variable locations
    swap(&x, &y);
    // ~ Print out the new value of x & y which should have been swapped
    printf("x is %i, y is %i\n", x, y);
}

// ~ The swap function
void swap(int *a, int *b)
{
    // ~ Put whatever is at the address of a into tmp
    int tmp = *a;
    // ~ Go to the address of a and put whatever is in the address of b into the address of a
    *a = *b;
    // ~ Go to the address of b and put whatever is in the address of tmp into the address of b
    *b = tmp;
}
