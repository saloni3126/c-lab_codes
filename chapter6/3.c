//Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num. 

#include <stdio.h>

// Recursive Fibonacci function
int FIBO(int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int n;

    printf("Enter how many Fibonacci terms you want: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }

    printf("\n");
    return 0;
}

