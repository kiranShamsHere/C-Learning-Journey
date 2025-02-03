#include <stdio.h> // Standard input-output library for C programs (required for printf) and also called header file or preprocessor directive. It is used to include the contents of the file in the program. The contents of the file are included in the program before compilation.

// Main function: Entry point of the C program. The program execution starts from the main function. It is mandatory for every C program to have a main function. It returns an integer value. It indicates the compiler that the program has executed successfully.
int main()
{
    printf("Hello World!\n"); // Prints "Hello World!" to the console.
    return 0;                  // Indicates that the program executed successfully.
}

// Output: Hello, World!
/* Tips:
   - Always include <stdio.h> when using printf.
   - The main function must return an integer value.
   - \n is used to move to a new line in the output.
   - Use comments:
     // for single-line comments or /* for multiple line comments */
