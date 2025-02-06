#include <stdio.h>
int main()
{

    // Data types: Data type is a classification of data, which tells the compiler or interpreter how the programmer intends to use the data. The data type determines the size and range of values that can be stored in a variable of that type.

    // Types of data types in C:
    /* 1. Primitive data types : int, char, float, double, etc.
    2. Derived data types : array, pointer, structure, union, etc.
    3. Void type : void
    4. User - defined types : struct, enum, typedef etc. */

    // Let's see some examples of data types:
    /* Primitive data types :
    1. int : Used to store integer values.
    2. float : Used to store floating - point values.
    3. char : Used to store character values. It can store only a single character. Single quotes are used represent a character.
    4. double : Used to store double - precision floating - point values. */

    // Example of primitive data types:
    int a = 10;
    float b = 3.14;
    char c = 'K';
    double d = 2.71828;

    // Size of data types: The size of data types in C is machine dependent. It may vary from one machine to another. The sizeof() operator is used to get the size or memory allocation required of a variable or data type.

    // Let's see the size of data types:
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of double: %d bytes\n", sizeof(double));

    // Exercise: Declare variables of the following data types and print their sizes:
    /* int, float, char, double */

    return 0;
}