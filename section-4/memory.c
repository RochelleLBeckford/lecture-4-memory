#include <stdio.h>
#include <stdlib.h>

// & Demonstrates memory errors and how to find a solution
int main(void)
{
    /*
    ~ Allocating 3 integers ~> Malloc takes as its argument the number of bytes that you want to get
    ~ Use sizof() to ask how big is a datatype -> like an int on this system (dynamic way to ask this question)
        ~ For char will always get back 1
    ~ Return on the lefthand side the return value of malloc from the righthand side
    ~ x is a pointer to an integer
    ~ Dynamically get space for 3 integers from malloc and store them in x
    */
    // ~ Allocation 12 bytes of memory and putting it in x
    int *x = malloc(3 * sizeof(int));
    // ~ Should be checking for NULL -> if malloc has an error or not enough memory for whatever reason should not be proceeding to touch that memory b/c it might be the NULL address and thus no more work to be done exit the program
    if (x == NULL)
    {
        return 1;
    }

    // ~ The indexing is wrong -> in arrays start w/ index 0
    // x[1] = 72;
    // x[2] = 73;
    // x[3] = 33;
    // ~ Could use pointers instead of array notations -> ie go to x and put 72 there
    // *x = 72;
    // *(x + 1) = 73;
    // *(x + 2) = 33;

    // ~ Cleaner to use brackets
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    // ~ This program has a memory leak b/c did not call free() -> malloc is asking for memory and never handing it back
    // ~ Use valgrind in the terminal to find errors in memory -> memory checker
    free(x);

    // ~ Only if reach all the way to the bottom should return 0 to say it was a successful operation
    return 0;
}
