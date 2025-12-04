#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) (((b) != 0) ? ((a) / (b)) : 0)  // Checks for division by zero

int main() {
    int num1 = 10, num2 = 5;
    
    printf("Addition of %d and %d: %d\n", num1, num2, ADD(num1, num2));
    printf("Subtraction of %d and %d: %d\n", num1, num2, SUBTRACT(num1, num2));
    printf("Multiplication of %d and %d: %d\n", num1, num2, MULTIPLY(num1, num2));
    printf("Division of %d by %d: %d\n", num1, num2, DIVIDE(num1, num2));
    
    return 0;
}
