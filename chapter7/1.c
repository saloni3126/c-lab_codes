//Write a C program that uses functions to perform the following operations: 
       // a. Reading a complex number. 
       // b. Writing a complex number. 
       // c. Addition and subtraction of two complex numbers 

#include <stdio.h>

// Function to read a complex number
void readComplex(float *r, float *i) {
    printf("Enter real part: ");
    scanf("%f", r);
    printf("Enter imaginary part: ");
    scanf("%f", i);
}

// Function to print a complex number
void printComplex(float r, float i) {
    printf("%.2f + %.2fi\n", r, i);
}

// Function to add two complex numbers (prints result here)
void add(float r1, float i1, float r2, float i2) {
    float r = r1 + r2;
    float i = i1 + i2;
    printf("Sum = %.2f + %.2fi\n", r, i);
}

// Function to subtract two complex numbers (prints result here)
void subtract(float r1, float i1, float r2, float i2) {
    float r = r1 - r2;
    float i = i1 - i2;
    printf("Difference = %.2f + %.2fi\n", r, i);
}

int main() {
    float r1, i1, r2, i2;

    printf("Enter first complex number:\n");
    readComplex(&r1, &i1);

    printf("\nEnter second complex number:\n");
    readComplex(&r2, &i2);

    printf("\nFirst number: ");
    printComplex(r1, i1);

    printf("Second number: ");
    printComplex(r2, i2);

    printf("\n");
    add(r1, i1, r2, i2);
    subtract(r1, i1, r2, i2);

    return 0;
}


