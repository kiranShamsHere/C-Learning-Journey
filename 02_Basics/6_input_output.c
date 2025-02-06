#include <stdio.h>

int main()
{
    float number_one, number_two;

    printf("Enter the first number: ");
    scanf("%f", &number_one);

    printf("Enter the second number: ");
    scanf("%f", &number_two);

    printf("\n");
    printf("The sum of two numbers is : %f", number_one + number_two);

    printf("\n");
    printf("The difference of two numbers is : %f", number_one - number_two);

    printf("\n");
    printf("The product of two numbers is : %f", number_one * number_two);

    printf("\n");
    printf("The division of two numbers is : %f", number_one / number_two);

    // Some examples are here:

    // 1. Write a program  to find the area of a triangle using the formula: area = (base * height) / 2
    // Solution:

    float base, height, area;
    printf("\n\n");
    printf("Base:");
    scanf("%f", &base);

    printf("Height:");
    scanf("%f", &height);

    area = (base * height) / 2;
    printf("\n");
    printf("The area of the triangle is: %f", area);

    // 2. Write a program to find the expression value using the formula: expression = (a + b) * (a - b) / (a * b)
    // Solution:

    int a, b;
    printf("\n\n");
    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%d", &b);

    float expression = (a + b) * (a - b) / (a * b);
    printf("\n");
    printf("The expression is: %f", expression);

    // 3. Write a program to find the average of three numbers using the formula: average = (a + b + c) / 3
    // 4. Write a program to find the sum of the first n natural numbers using the formula: sum = (n * (n + 1)) / 2
    // 5. Write a program to take two characters as input and print them.

    return 0;
}
