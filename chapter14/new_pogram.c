#include <stdio.h>
#include "arithmetic.h"

int main() {
    int a = 12, b = 4;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %d\n", divide(a, b));

    return 0;
}
