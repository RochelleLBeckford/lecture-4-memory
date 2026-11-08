#include <stdio.h>
#include <stdlib.h>

// & Simple Program to contain potentially memory errors
// ~ Not a useful program but good to understand mistakes and how to layout syntax in the future
int main(void)
{
    // ~ This pair of lines makes 2 pointers & have not initialized any values
    // ~ Give me a variable x that is going to store the address of an int
    int *x;
    // ~ Give me a variable y that is going to store the address of an int
    int *y;

    // ~ Allocating enough space for a single int -> malloc returns the address of a chunk of memory which goes into x
    x = malloc(sizeof(int));

    // ~ Means go to the address in x (chunk of memory) and put 42 there
    *x = 42;
    // ~ Means go to the address in y (chunk of memory) and put 13 there
    // ~ This is bad since we didnot initialize y and there is already a garbage value there -> if you try to dereference an invalid or bogus pointer
    // ~ The solution is to just not do this at all
    // *y = 13;

    // ~ Do something sensible by assigning x to y
    y = x;

    // ~ Since y has been initialized then can point to the address in y which is the same address as 42 and put 13 there
    *y = 13;
}
// ~ Understanding the basic building blocks will help avoid making these errors
