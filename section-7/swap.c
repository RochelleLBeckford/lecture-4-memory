#include <stdio.h> // ~ So thati can use printf()

// & Program whose purpose in life is to swap two variables -> Fails to swap two integers

// ~ Prototype - Telling the compiler that this function will exist later on in the file (a promise that it will be defined)
// ~ Teach the compiler what the function I am calling is going to look like
void swap(int a, int b);

// ~ Passing in by reference instead of value so that the original values will be swapped as well not just the copies
// ~ Change to be addresses of integers
// ~ a will be an address of an int, b will be an address of an int
void swap(int a, int b);

int main(void)
{
    // ~ Set the variables x & y
    int x = 1;
    int y = 2;

    // ~ Print out the value of the current x & y
    printf("x is %i, y is %i\n", x, y);
    // ~ Swap them
    swap(x, y);
    // ~ Print the new value of x & y -> hopefully the values should be swapped
    printf("x is %i, y is %i\n", x, y);
}

// ~ The actual swap function
void swap(int a, int b)
{
    // ~ Put a copy of the value of 'a' into tmp
    int tmp = a;
    // ~ The value of b goes into 'a'
    a = b;
    // ~ The tmp value becomes 'b'
    b = tmp;
    // ~ The values should be swapped
}
