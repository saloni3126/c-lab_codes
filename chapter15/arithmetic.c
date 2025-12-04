#include "arithmetic.h"
#include <stdio.h>

#define EXPORT __attribute__((visibility("default")))

// Implementation of arithmetic functions

EXPORT int add(int a, int b) {
    return a + b;
}

EXPORT int subtract(int a, int b) {
    return a - b;
}

EXPORT int multiply(int a, int b) {
    return a * b;
}

EXPORT float divide(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return (float)a / b;
}
