<!-- & This creates a banner for the ReadMe -->
<div align="center">
    <img src="img/cherry-blossom-pink-maiden-peeking-through-the-pink-vale.png" alt="Cherry Blossom Pink Maiden Peeking Through The Pink Vale" width="100%" height="450">
</div>

<h1 align="center">🌸 Memory: The Architecture of Data 🌸</h1>

<h3>Practice: Understanding pointers, addresses, and managing data in C</h3>

<h3>Learning Memory: Discovering how data is stored, accessed, and manipulated behind the scenes</h3>

<hr>

<h2 align="center">💫 Overview</h2>

- [ ] <b>Memory</b> is the invisible workspace where all my variables live. In this lecture, I finally looked under the hood. Before this, I treated variables as magic boxes that just held values. Now, I understand that every piece of data has a specific <i>address</i> in my computer's memory. I learned how to find those addresses using pointers, how to dynamically allocate my own memory using `malloc`, and how to safely give it back using `free`. I also explored file I/O, turning my programs from transient scripts into tools that can save and manipulate data permanently. Understanding memory is not just about syntax, it is about respecting the computer's resources and understanding exactly how my code executes.

<hr>

<h2 align="center">🎨 Key Design Features</h2>

- [ ] <b>Pointers and Addresses</b>
    - [ ] The ampersand `&` operator gets the address of a variable in memory (i.e. `&n`).
    - [ ] The asterisk `*` operator declares a pointer or dereferences it to go to that address (i.e `*p`).

- [ ] <b>Strings and Pointers</b>
    - [ ] The CS50 `string` type is literally just a pointer to the first character: `char *s`.
    - [ ] Under the hood, a string is just a sequence of bytes in memory ending with a `\0` (`NULL character`).

- [ ] <b>Dynamic Memory Allocation</b>
    - [ ] Using `malloc (size)` from `<stdlib.h>` to ask the operating system for a chunk of memory during runtime.
    - [ ] Using `free (pointer)` to return that memory to the system to prevent memory leaks and keep programs running efficiently.

- [ ] <b>Passing by Reference</b>
    - [ ] Normally, C passes variables by value (a copy). To change the original variable, I pass the memory address using pointers (`int *a`).
    - [ ] This is exactly how `scanf( )` modifies variables -> it needs the `&` to know where to put the user's input

- [ ] <b>File I/O and Byte Manipulation</b>
    - [ ] Using `FILE *` pointers with `fopen( )`, `fprintf( )`, `fread( )`, and `fclose( )` to interact with files on my hard drive.
    - [ ] Using `typedef( ) unsigned char BYTE` to read and copy raw binary data byte by byte.

<hr>

<h2 align="center">🔍 Simple Practice: Real-World Thinking in C</h2>

- [ ] Pointers used to terrify me. But now I see them as street addresses. If a variable is a house, the pointer is just a piece of paper with the house's address. When I use `*`, I am walking to that address and opening the door.
- [ ] The mystery of `strcmp( )` was finally solved. When I compared two strings with `==`, I was actually just comparing their memory addresses (where they live), not the text inside them. `strcmp( )` actually walks down the street, character by character, comparing the contents of the houses.
- [ ] `malloc` feels like going to a construction company and saying, "I need exactly enough space to build this string." It is powerful but dangerous. If I forget to `free` that memory, it is like abandoning a building, eventually, the city (my computer) runs out of space.
- [ ] The `swap` function was an eye-opener. I learned that if I just pass variables into a function, the function plays with copies. To actually swap my `x` and `y`, I have to hand the function their memory locations and rearrange the furniture.
- [ ] Handling files byte-by-byte using `freed` and `fwrite` in my `cp.c` program made me realize how file copying actually works. It is not magic, it is just a while loop grabbing chunks of memory and dumping them somewhere else.

<hr>

<h2 align="center">👩🏾‍💻 C Code Outline</h2>

- [ ] <b>Working with Memory Addresses and Pointers</b>:
    - [ ] Using `&` to get an address and `*` to store or dereference it.
        ```c
        #include <stdio.h>

        int main(void)
        {
            int n = 50;
            // ~ *p stores the address of an integer
            int *p = &n;

            // ~ Print out the value of p itself b/c p is now equivalent to &n
            printf("%p\n", p);

            // ~ Use * to print out not p, but n, but by using p
            // ~ * before a variable = dereference operator -> go to the address in memory
            printf("%i\n", *p);
        }
        /*
            ~ The output:
                ~ 0x7ffc
                ~ 50
        */
        ```

- [ ] <b>Strings and Just Pointers</b>:
    - [ ] Understanding that `char *s` is the same thing as using `string`, and using pointer arithmetic to access characters.
        ```c
        #include
        int main(void)
        {
            // ~ if no cs50 library installed, use char * instead
            char *s = "HI!";

            // ~ Print out a specific character from string by treating `s` as an array
            printf("%c\n", s[0]);

            // ~ Print out the first character by using *s instead of s[0]
            printf("%c\n", *s);

            // ~ Print out 2nd character: equivalent to going to `s` and moving over one
            printf("%c\n"m *(s + 1));

            // ~ Print out 3rd character
            printf("%c\n", *(s + 2));
        }
        /*
            ~ The output:
                ~ H
                ~ H
                ~ I
                ~ !
        */
        ```

- [ ] <b>Comparing Strings Property</b>:
    - [ ] Using `strcmp( )` to compare the characters at the memory addresses, not the addresses themselves.
        ```c
        #include <cs50.h>
        #include <stdio.h>
        #include <string.h>

        int main(void)
        {
            // ~ String s is actually char *s
            char *s = get_string("s: ");
            char *t = get_string("t: ");

            // ~ If the string comparison of s & t == 0 (meaning they are equal) then print Same
            if (strcmp(s, t) == 0)
            {
                printf("Same\n");
            }
            else
            {
                printf("Different\n");
            }

            // ~ Print out the address in memory of s & t -> should see two different addresses
        }
        ```

- [ ] <b>Copying Strings with malloc</b>:
    - [ ] Creating a true copy in memory rather than just copying a pointer address.
        ```c
        #include <ctype.h>
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>

        int main(void)
        {
            char *s = get_string("s: ");

            // ~ Malloc returns the address of a chunk of memory -> ask for strlen + 1 (for \0)
            char *t = malloc(strlen(s) + 1);

            // ~ to copy s into t -> loop through and copy every character including NULL character
            for (int i = 0; n = strlen(s); i <= n; i++)
            {
                t[i] = s[i];
            }

            // ~ Capitalize just the 1st character of t
            if (strlen(t) > 0)
            {
                t[0] = toupper(t[0]);
            }

            printf("s: %s\n", s);
            printf("t: %s\n", t);

            // ~ To give back the memory asked from malloc -> free it up
            free(t);
        }
        ```

- [ ] <b>Understanding the Swap Function (Pass by Reference)</b>:
    - [ ] Using pointers to permanently swap the values of two variables in memory.
        ```c
        #include <stdio.h>

        // ~ Prototype -> tell the program to expect this later on in the code
        // ~ Pass in by reference instead of value so original values will be swapped
        void swap(int *a, int *b);

        int main(void)
        {
            int x = 1;
            int y = 2;

            printf("x is %i, y is %i\n", x, y);

            // ~ Need to pass in the address of x and address of y using &
            swap(&x, &y);

            printf("x is %i, y is %i\n", x, y);
        }

        void swap(int *a, int *b)
        {
            // ~ Put whatever is at the address of `a` into tmp
            int tmp = *a;
            // ~ Go to the address of `a` and put whatever is in the address of `b` into `a`
            *a = *b;
            // ~ Go to the address of b and put whatever is in tmp into `b`
            *b = tmp;
        }
       ```

- [ ] <b>File I/O: Writing to a Phonebook</b>:
    - [ ] Using `fopen` and `fprintf` to save data permanently to a `.csv` file.
        ```c
        #include <cs50.h>
        #include <stdio.h>
        #include <string.h>

        int main(void)
        {
            // ~ `a` will append to the file instead of overwriting
            FILE *file = fopen("phonebook.csv", "a");

            // ~ Check for NULL
            if (file == NULL)
            {
                return 1;
            }

            char *name = get_string("Name: ");
            char *number = get_string("Number: ");

            // ~ Specify what file to print to
            fprintf(file, "%s,%s\n", name, number);

            // ~ Close that file
            fclose(file);

            return 0;
        }
        ```

- [ ] <b>File I/O</b>:
    - [ ] Using `freed` and `fwrite` to create a copy of any file.
        ```c
        #include <stdio.h>

        // ~ Prototype -> tell the program to expect this later on in the code
        // ~ Tell compiler that this char cannot be interpreted as negative
        typedef unsigned char BYTE;

        int main(int argc, char *argv[])
        {
            // ~ argv[1] is source, argv[2] is destination
            FILE *src = fopen(argv[1], "r");
            FILE *dst = fopen(argv[2], "w");

            BYTE b;

            // ~ Loop to iterate over a file byte by byte making a copy
            // ~ fread returns number of bytes read -> when it hits 0, it is E0F
            while (fread(&b, sizeof(b), 1, src) != 0)
            {
                // ~ Call fwrite( ) going to the address of b and write it
                fwrite(&b, sizeof(b), 1, dst);
            }

            fclose(dst);
            fclose(src);
        }
        ```

<hr>

## <h2 align="center">✨ Encompassed Technologies</h2>

- [ ] <b>C Programming Language:</b>
    - [ ] The foundation that gives me the tools to manage my own memory, giving me unmatched control but requiring strict discipline to avoid errors like segmentation faults and memory leaks.
- [ ] <b>Standard Libraries:</b>
    - [ ] `<stdlib.h>` for dynamic memory allocation like `malloc( )`, `free( )` and exit codes.
    - [ ] `<stdio.h>` for file input/output operations like `fopen( )`, `fread( )`, `fwrite( )`, `fprintf( )`.
    - [ ] `<string.h>` for string manipulation functions like `strcmp( )` and `strlen( )`, `strcpy( )`.
    - [ ] `<ctype.h>` for character classification like `toupper( )`.
- [ ] <b>Valgrind:</b>
    - [ ] An indispensable memory checking tool used in the terminal to find memory errors and memory leaks.
- [ ] <b>GCC Compiler:</b>
    - [ ] Translate my C code into machine instructions, managing the stack and heap memory allocations that I dictate in my code.
- [ ] <b>Terminal/Command Line:</b>
    - [ ] Where I compile my programs with `make`, execute them with `./program-name`, and pass command-line arguments directly to my programs turning my code into action. It is where my code come to life.
- [ ] <b>VS Code:</b>
    - [ ] This is my coding sanctuary. A lightweight but powerful source code editor that provides an integrated terminal, syntax highlighting, extensions for writing and testing code efficiently.



