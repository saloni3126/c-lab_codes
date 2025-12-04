//Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.

#include <stdio.h>

// Recursive factorial

long long FACT_rec(int n) {
    if (n == 0)
        return 1;
    return n * FACT_rec(n - 1);
}

// Non-recursive factorial
long long FACT_nonrec(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Binomial coefficient nCr = n! / (r! * (n-r)!
long long nCr(int n, int r) {
    long long num   = FACT_rec(n);          // numerator   n!
    long long den   = FACT_nonrec(r) * FACT_nonrec(n - r);
    return num / den;
}

int main() {
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid values! n must be >= r and both >= 0.\n");
        return 0;
    }

    printf("\nUsing recursive and non-recursive factorial functions:\n");
    printf("n! (recursive)     = %lld\n", FACT_rec(n));
    printf("r! (non-recursive) = %lld\n", FACT_nonrec(r));
    printf("(n-r)! (non-rec)   = %lld\n", FACT_nonrec(n - r));

    printf("\nBinomial Coefficient (nCr) = %lld\n", nCr(n, r));

    printf("\nTable of nCr for n = %d:\n", n);
    printf("r\t nCr\n");
    printf("----------------\n");
    for (int i = 0; i <= n; i++) {
        printf("%d\t %lld\n", i, nCr(n, i));
    }

    return 0;
}
