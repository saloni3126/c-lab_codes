#include <stdio.h>

int main() {
    int positive_count = 0, negative_count = 0, zero_count = 0;
    float number;

    while (1) {
        printf("Enter a number (or type 0 to finish): ");
        scanf("%f", &number);

        if (number == 0) {
            break;
        }

        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}
