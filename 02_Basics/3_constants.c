#include <stdio.h>
int main()
{

    // Constatnts: Fixed values that a program may not change during its execution are called constants. Constants can be of any of the basic data types like an integer constant, a floating constant, a character constant, or a string literal. There are enumeration constants as well.
    // Syntax: datatype constant_name = value;

    // Types of Constants:
    /* 1. Integer constant : An integer constant is a number that does not change during the execution of the program.
     2. Floating constant : A floating constant is a number that does not change during the execution of the program.
     3. Character constant : A character constant is a single character enclosed in single quotes.
     4. String literal : A string literal is a sequence of characters enclosed in double quotes. */

    // Example:
    const int max_score = 100; // Declaring a constant of type int and initializing it with a value.
    printf("The maximum score is: %d", max_score);

    // Exercise: Declare and initialize constants for the following:
    // 1. Grade level = 12
    // 2. Student name = "John Doe"
    // 3. Pi = 3.14
    // 4. A single character 'A'
    // 5. A string "Hello, World!"

    return 0;
}