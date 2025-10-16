/*
 * fib.h
 *
 * Purpose:
 *  Declare the Fibonacci functions implemented in fib.c so main.c can use them.
 *  Enable the compiler to type-check calls via function prototypes.
 *  Expose the operation counter used to measure work.
 *
 * Summary:
 * fib.c = implementation details
 * fib.h = public declarations 
 *
 * Using a header keeps the code organized, readable, and reusable.
 */


#ifndef FIB_H
#define FIB_H

// keeps track of how many times we do a calculation
extern unsigned long long FIB_OPS;

//Reset counter to 0

void fib_reset_ops(void);

long long fib_iterative(int n);
long long fib_recursive(int n);
long long fib_dynamic(int n);

#endif