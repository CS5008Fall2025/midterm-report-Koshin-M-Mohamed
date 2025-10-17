# DO THIS: python3 run.py --n <number>   (or python run.py on some Windows systems)
#
# Example:
#     python3 run.py --n 10     # macOS/Linux
#     python3 run.py --n 35
#     python run.py --n 10      # Windows, if 'python' points to Python 3
#
# - The --n argument sets which Fibonacci number to calculate.
# - If --n is not provided, the script defaults to N = 5.
# - The script prints the result for each method, timing, and the full Fibonacci series from 1 to N.


from fib import fib_iterative, fib_recursive, fib_dynamic
import time
import argparse

# Set up command-line arguments

parser = argparse.ArgumentParser(description="Calculate Fibonacci numbers using three methods")
parser.add_argument(
    "--n", type=int, default=5, help="The Fibonacci number to calculate (default: 10)"
)
args = parser.parse_args()
N = args.n

print(f"\nCalculating Fibonacci numbers for N = {N}\n")

# Iterative Fibonacci

start = time.perf_counter()
iter_result = fib_iterative(N)
end = time.perf_counter()
print(f"Iterative result: {iter_result}")
print(f"Iterative took {end - start:.6f} seconds\n")

# Recursive Fibonacci

start = time.perf_counter()
rec_result = fib_recursive(N)
end = time.perf_counter()
print(f"Recursive result: {rec_result}")
print(f"Recursive took {end - start:.6f} seconds\n")

# Dynamic Programming Fibonacci

start = time.perf_counter()
dp_result = fib_dynamic(N)
end = time.perf_counter()
print(f"Dynamic Programming result: {dp_result}")
print(f"Dynamic Programming took {end - start:.6f} seconds\n")


# Print the full Fibonacci series from 1 to N using iterative method

print(f"Fibonacci series from 1 to {N}:")
series = [fib_iterative(i) for i in range(1, N + 1)]
print(series)
