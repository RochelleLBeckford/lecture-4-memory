#include <stdio.h>

// & Garbage values -> values that are still in memory but i did not necessarily put them there
int main(void)
{
    // ~ An array of way too many exam scores
    int scores[1024];

    // ~ This loop will print out the 1st int all the way to the 1024th int
    // ~ All should be garbage values since I have not entered any value in those addresses yet
    for (int i = 0; i < 1024; i++)
    {
        // ~ Print out each of these scores
        printf("%i\n", scores[i]);
    }
}
// ~ Missing the actual scores or have them input -> not used get_int or even manually entered the scores
