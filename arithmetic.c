#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = b / a;
    int modulus = b % a;

    printf("%d\n", addition);
    printf("%d\n", subtraction);
    printf("%d\n", multiplication);
    printf("%d\n", division);
    printf("%d\n", modulus);

    // estra...
    int x = 20, y = 11;
    float z = x*1.0 / y;
    // printf("%d", z);
    printf("%f", z);
    return 0;
}

// Additional = (+)
// Subtraction = (-)
// Multiplication = (*)
// Division = (/)
// Modulus = (%)