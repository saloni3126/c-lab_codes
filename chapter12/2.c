#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1 = 5, num2 = 10;
    int square = SQUARE(num1);
    printf("Square of %d is: %d\n", num1, square);
    int max_value = MAX(num1, num2);
    printf("Max of %d and %d is: %d\n", num1, num2, max_value);
    return 0;
}
