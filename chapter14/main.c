//creating a main file
#include <stdio.h>
#include "arithmetic.h"

int main() {
    int num1 = 10, num2 = 5;

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %d\n", divide(num1, num2));

    return 0;
}

