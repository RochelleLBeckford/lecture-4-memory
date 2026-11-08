#include <stdio.h>

// & Simple copy program -> in terminal able to copy one file to another similar to a progress bar where byte byte byte want to do something -> copy something -> take two comman line argument: name of the file the copy & the name of the new file created from it

// ~ Declare what a byte
// ~ Tell the compiler that this char (sequence of 8 bits) cannot be interpreted as a negative number b/c not doing anything with math. Raw bytes
typedef unsigned char BYTE;

// ~ Main takes in an argument
// int main(int arg,string argv[] )
// ~ Actually char * instead of a string
int main(int arg, char *argv[] )
{
    // ~ src -> source
    // ~ argv[1] -> the 1st word the human types
    // ~ open it in readmode "r" -> read the source and write to the destination
    // ~ 0 is the name of the program -> 1 & 2 will contain the next 2 words that the user writes
    // ~ If know if the file is binary can "rb" or "wb" in binary
    FILE *src = fopen(argv[1], "r");
    // ~ dst -> destination
    FILE *dst = fopen(argv[2], "w");

    // ~ Copy the src to the destination byte by byte one at a time
    // ~ Declare bit to be something significant
    BYTE b;

    // ~ Loop to iterate over a file byte by byte -> making a copy
    // ~ Reading from this file into this byte the size of one byte one at a time into this source and check i read atleast one
    // ~ While I can read one byte at a time write that byte to the file
    // ~ Implementing progress bar of adding byte by byte one at a time
    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        // ~ Call fwrite() -> going to the address of that byte grabbing the size of it which happens to be 1 & write it to destination
        fwrite(&b, sizeof(b), 1, dst);
    }
    // ~ Close the destination
    fclose(dst);
    // ~ Close the source
    fclose(src);
}
