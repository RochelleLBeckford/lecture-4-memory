#include <cs50.h>
#include <stdio.h>
#include <string.h>

// & Understanding how to use code to access files
int main(void)
{
    // ~ How to open a file -> phonebook.csv
    // ~ fopen() -> will open a file whether it exists or not & opening it in such a way that I can write to it
        // ~ w for write
    // ~ The return value will be stored in the file variable
    // ~ that file is a struct called FILE in all caps
    // FILE *file = fopen("phonebook.csv", "w");
    // ~ "w" will have to write to the 1st bit of the file which is why the values keep disappearing -> to stop that from happening append to the file instead "a"
    FILE *file = fopen("phonebook.csv", "a");
    // ~ Check for NULL
    if (file == NULL)
    {
        // ~ Return 1 for error b/c something went wrong
        return 1;
    }

    // ~ Ask the user for a name and number to add to the phonebook
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // ~ Now have a name and number in variable -> print them to the file
    // ~ Specify what file to print to
    fprintf(file, "%s, %s\n", name, number);

    // ~ Close that file
    fclose(file);

    // ~ Return 0 if made it this far all is well
    return 0;
}
