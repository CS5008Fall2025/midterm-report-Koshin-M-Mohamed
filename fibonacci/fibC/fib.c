#include "fib.h"
#include <stdio.h>

// global variable to count operations
unsigned long long FIB_OPS = 0;

void fib_reset_ops(void) {
    FIB_OPS = 0;
}

// Iterative 
// uses a simple loop to get the nth number

long long fib_iterative(int n){
if (n<= 1)
return n;

long long a = 0;
long long b = 1;
long long next = 0;

for(int i =2; i<= n; i++){
    next = a + b; // adds the two previous number 
    a = b;   // shift a forward
    b = next; // shift b forward
    FIB_OPS++;  // counts total number of additions 
}

return b; 

}

// Recursive
// calls itself again and again until it reaches the base case 

long long fib_recursive(int n){
    if (n <= 1)
        return n;

    FIB_OPS++;
    return fib_recursive(n - 1) + fib_recursive(n - 2);

}

// Dynamic Programming Fibonacci
// This version stores the results, no need to repeat steps
long long fib_dynamic(int n) {
    if (n <= 1)
        return n;

    long long fib[100]; // small array to hold values
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        FIB_OPS++;
    }

    return fib[n];


}
