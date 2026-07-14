# Number-Line-Jumps

A C++ solution to the HackerRank Number Line Jumps (Kangaroo) problem.

Problem Statement

Two kangaroos start at different positions on a number line and jump forward at fixed distances. Determine whether they will land at the same location after making the same number of jumps.

Approach
Use a mathematical solution instead of simulating each jump.
The kangaroos can meet only if:
The first kangaroo jumps farther than the second (v1 > v2).
The difference in their starting positions is divisible by the difference in their jump distances.

This approach eliminates unnecessary iterations and provides an optimal solution.

Time Complexity
O(1)
Space Complexity
O(1)
Language
C++
