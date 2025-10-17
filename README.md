[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kdfTwECC)
# Midterm p1: Report on Analysis of Fibonacci  Series
* **Author**: Koshin Mohamed 
* **GitHub Repo**: https://github.com/CS5008Fall2025/midterm-report-Koshin-M-Mohamed.git
* **Semester**: Fall 2025
* **Languages Used**: c, pyhton


## Overview

The goal of this project was to analyze the performance of different Fibonacci algorithms iterative, recursive, and dynamic programming implemented in both C and Python. In C, the algorithms are organized in fib.c with declarations in fib.h and tested through main.c, where I track both the Fibonacci value and the number of operations. In Python, the algorithms are in fib.py, and run.py allows running any value of N from the terminal while timing each method and printing the full series.

Each algorithm approaches the problem differently:

Iterative uses a simple loop to calculate the Nth Fibonacci number.

Recursive repeatedly calls the function until it reaches the base case.

Dynamic Programming stores previous results to avoid repeated calculations, improving efficiency for larger N.

This project let me explore algorithm efficiency, Big O complexity, and the differences in language structure. C required careful handling of arrays, types, and operation counting, while Python allowed quick experimentation with lists and dynamic typing. By implementing the same algorithms in both languages and comparing runtime and operations, I gained hands on experience with how language choice and algorithm design impact performance and readability.

## Empirical Data & Discussion 

Table shows runtime for Fibonacci algorithms implemented in Python:

| N  | Iterative Time (s) | Recursive Time (s) | DP Time (s)|
| 5  | 0.000003         | 0.000003         | 0.000002      |
| 10 | 0.000002         | 0.000013         | 0.000002      |
| 15 | 0.000001         | 0.000126         | 0.000002      |
| 20 | 0.000001         | 0.001395         | 0.000002      |
| 25 | 0.000001         | 0.014471         | 0.000006      |
| 30 | 0.000002         | 0.151852         | 0.000009      |


Table shows runtime for Fibonacci algorithms implemented in C:

| N  | Iterative Time (s) | Recursive Time (s) | DP Time (s) | Iterative Ops | Recursive Ops | DP Ops|
| 5  | 0.000003         | 0.000001         | 0.000000   | 4             | 7             | 4         |
| 10 | 0.000000         | 0.000003         | 0.000002   | 9             | 88            | 9         |
| 15 | 0.000001         | 0.000016         | 0.000000   | 14            | 986           | 14        |
| 20 | 0.000001         | 0.000155         | 0.000001   | 19            | 10945         | 19        |
| 25 | 0.000002         | 0.001605         | 0.000001   | 24            | 121392        | 24        |
| 30 | 0.000000         | 0.009224         | 0.000001   | 29            | 1346268       | 29        |



## Language Analysis

C made me think carefully about every step. I had to set up arrays for dynamic programming and manage the operation counter manually. Compiling the code meant I caught mistakes early, and I could see exactly how many operations each method took. It felt a bit more work, but I liked the control and the precision it gave me.

Python was much easier to write and read, maybe because I am experienced with python. However, lists made dynamic programming simple, and I didn’t have to worry about memory or compiling. The syntax is straightforward, so I could focus on the logic instead of setup. The downside is that recursion slows down fast for larger N, and I couldn’t track operations directly like in C.

Both languages taught me different things. C showed me the mechanics behind the calculations and gave precise control, while Python let me write the algorithms quickly and test ideas easily. 


### Language 1: C



### Language 2: Python



### Comparison and Discussion Between Experiences

Comparing Fibonacci in C and Python showed some clear differences. C ran much faster, even for larger numbers, while Python slowed down a lot with recursion. Both languages showed the same pattern: recursive gets slow quickly, while iterative and dynamic programming stay fast.
Python was easier to write and read, especially for dynamic programming, because lists make storing previous numbers simple. C required more setup with arrays and counting operations, but it gave precise control and let me see exactly how the calculations worked.
Overall, both languages taught me something different: C is faster and shows operations clearly, Python is easier to implement and understand quickly. Algorithm choice and language choice both matter for performance, especially as N grows.

## Conclusions / Reflection

Working on this Fibonacci project showed me how much the choice of algorithm and programming language affects performance. Recursive solutions are simple to write but become slow very quickly, while iterative and dynamic programming methods scale much better.

Comparing C and Python was really eye opening. C is fast, precise, and lets you track exactly what’s happening in your code, but it takes more setup and attention to detail. Python is easier to write and read, which makes experimenting and testing ideas quick and straightforward, even if it’s slower for heavy computations. Structurally, C is compiled and strongly typed, so you need to define arrays and variable types ahead of time, while Python is interpreted and dynamically typed, letting you write more flexible code without worrying about memory management.

Working on Fibonacci also helped me build on concepts from previous homeworks and labs, especially recursion, loops, and dynamic programming. I got better at thinking about time complexity and Big O, and I became more comfortable switching between iterative, recursive, and DP approaches. It reinforced what I’ve been learning about structuring code efficiently and debugging logic step by step.

Overall, this project helped me see the trade offs between readability, speed, and control. I learned that understanding both the algorithm and the language features is key to writing code that works efficiently and reliably, and it gave me confidence to tackle more complex problems in the future.


## References

tack Overflow. "Best way to find Fibonacci number." Stack Overflow, 8 Mar. 2017. https://stackoverflow.com/questions/42676689/best-way-to-find-fibonacci-number.