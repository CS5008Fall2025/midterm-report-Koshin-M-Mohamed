#include <stdio.h>
#include "fib.h"

int main() {
    int n;

    // Enter a number 
    printf("Enter a number to find its Fibonacci value: ");
    scanf("%d", &n);

    // Iterative
    fib_reset_ops();
    long long result_iter = fib_iterative(n);
    printf("\nIterative Fibonacci of %d = %lld\n", n, result_iter);
    printf("Operations: %llu\n", FIB_OPS);

    // Recursive
    fib_reset_ops();
    long long result_rec = fib_recursive(n);
    printf("\nRecursive Fibonacci of %d = %lld\n", n, result_rec);
    printf("Operations: %llu\n", FIB_OPS);

    // Dynamic Programming
    fib_reset_ops();
    long long result_dp = fib_dynamic(n);
    printf("\nDynamic Fibonacci of %d = %lld\n", n, result_dp);
    printf("Operations: %llu\n", FIB_OPS);

    return 0;
}
