#include <stdio.h>

// & Do not have to use get_int() to get an int but instead scanf()
int main(void)
{
    // ~ Declare a variable and not give it a value yet
    int n;

    // ~ Prompt to tell the user what you want for the value of n
    printf("n: ");
    
    // ~ Scan from the users keyboard an int & please put the integer that the user types in, in the variable called n
    // ~ This is slightly buggy -> If i want a function like scanf() to change a value of a variable just like the swap() I cannot just pass in n need to pass in the address of n
    scanf("%i", &n);

    // ~ Print out the value at the address of n itself
    printf("n: %i\n", n);
}
