//⁠Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include <stdio.h>

int main() {
    unsigned int a, b;

    printf("Enter two integers: ");
    scanf("%u %u", &a, &b);

    unsigned int and_result = a & b;
    unsigned int or_result = a | b;
    unsigned int not_a = ~a;
    unsigned int not_b = ~b;

    printf("Bitwise AND of %u and %u: %u\n", a, b, and_result);
    printf("Bitwise OR of %u and %u: %u\n", a, b, or_result);
    printf("Bitwise NOT of %u: %u\n", a, not_a);
    printf("Bitwise NOT of %u: %u\n", b, not_b);

    return 0;
}
