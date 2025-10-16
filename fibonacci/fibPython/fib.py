# Iterative Fibonacci
# Return the nth number using a loop.
# It starts from 0 and 1 and adds the previous two numbers until it reaches n.
def fib_iterative(n):
    if n <= 1:
        return n

    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b 
    return b

# Recursive Fibonacci
# It uses the formula: fib(n) = fib(n-1) + fib(n-2) until it reaches the base case.
def fib_recursive(n):
    if n <= 1:
        return n
    return fib_recursive(n - 1) + fib_recursive(n - 2)

# Dynamic Programming Fibonacci
# Return the nth number using a list to store previous results
# Avoids recalculating the same values and is faster than simple recursion for large n.
def fib_dynamic(n):
    if n <= 1:
        return n

    fib_numbers = [0, 1]
    for i in range(2, n + 1):
        fib_numbers.append(fib_numbers[i - 1] + fib_numbers[i - 2])
    return fib_numbers[n]
