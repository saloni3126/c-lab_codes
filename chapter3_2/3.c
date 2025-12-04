#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    int width = (rows * 2) - 1;

    printf("\nPascal's Triangle:\n");
    for int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }for (int j = 0; j <= i; j++) {
            int value = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%3d ", value);
        }printf("\n");
    }
return 0;
}

