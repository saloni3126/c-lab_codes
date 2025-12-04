// Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    int intVar = 42;
    float floatVar = 3.14f;
    char charVar = 'A';

    int *intPtr = &intVar;
    float *floatPtr = &floatVar;
    char *charPtr = &charVar;

    printf("Integer variable value: %d\n", intVar);
    printf("Integer pointer value: %p, points to value: %d\n", (void*)intPtr, *intPtr);

    printf("Float variable value: %.2f\n", floatVar);
    printf("Float pointer value: %p, points to value: %.2f\n", (void*)floatPtr, *floatPtr);

    printf("Char variable value: %c\n", charVar);
    printf("Char pointer value: %p, points to value: %c\n", (void*)charPtr, *charPtr);

    return 0;
}
