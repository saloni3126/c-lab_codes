//Write a program to apply left shift and right shift operator. 

#include <stdio.h>

int main() {
    unsigned int num, left_shifted, right_shifted;
    int shift_by;

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    printf("Enter number of positions to shift: ");
    scanf("%d", &shift_by);

    left_shifted = num << shift_by;
    right_shifted = num >> shift_by;

    printf("Original number: %u\n", num);
    printf("Left shifted by %d positions: %u\n", shift_by, left_shifted);
    printf("Right shifted by %d positions: %u\n", shift_by, right_shifted);

    return 0;
}
