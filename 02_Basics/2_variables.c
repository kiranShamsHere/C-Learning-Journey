#include <stdio.h>
int main()
{

    // Variables: A variable is a name given to a memory location in a program. It is used to store data. The value of a variable can be changed, hence the name variable. The data stored in a variable can be of different types, such as int, float, char, etc.
    // Syntax: datatype variable_name = value;

    int score;  // Declaring a variable of type int
    score = 97; // Assigning a value to the variable or initializing the variable
                // int score = 97; // Declaring and initializing the variable in a single line

    printf("Your score is: %d", score); // Printing the value of the variable
                                        // printf("Your score is: %d", 100); // Printing a hardcoded value instead of a variable. %d is used to print integer values. %d is a format specifier. It tells the compiler to print the value of an integer variable. The value of the variable is substituted in place of %d.

    // Rules for naming variables:
    /*
     1. Must start with a letter or an underscore (_).
     2. Can contain letters, digits, and underscores (_).
     3. Case-sensitive (e.g., myVariable ≠ myvariable).
     4. Cannot contain whitespaces or special characters (@, $, %, etc.).
     5. Cannot be a reserved keyword (e.g., int, float, return).
     6. Should be meaningful and follow naming conventions (camelCase, snake_case).
     7. Should not be too long. C allows variable names up to 63 characters long. */

    // Example variable names:
    int myScore = 100;          // camelCase
    float my_percentage = 85.5; // snake_case
    int _score = 80;            // starting with an underscore
    int score123 = 95;          // containing digits

    // Exercise: Declare and initialize variables for the following:
    /*
     1. Your age (int) and print it.
     2. Your first letter of ur name (char) and print it. (Hint: Use %c for char values)
     3. Your favorite number (float) and print it. (Hint: Use %f for float values)
     4. Your height (double) and print it. (Hint: Use %lf for double values) */

    return 0;
}