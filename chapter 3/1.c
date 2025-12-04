#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Enter the first side of the triangle: ");
    scanf("%f", &a);
    printf("Enter the second side of the triangle: ");
    scanf("%f", &b);
    printf("Enter the third side of the triangle: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is an Equilateral triangle.\n");
       }
        else if (a == b || b == c || a == c) {
            printf("The triangle is an Isosceles triangle.\n");
        }
        else {
            printf("The triangle is a Scalene triangle.\n");
        }
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("It is also a Right triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
