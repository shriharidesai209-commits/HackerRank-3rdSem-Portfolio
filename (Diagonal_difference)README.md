\# Diagonal Difference



\## Problem Description



Given a square matrix, calculate the absolute difference between the sums of its primary diagonal and secondary diagonal.



\## Approach



\- Traverse the matrix.

\- Add elements where the row and column indices are equal to calculate the primary diagonal sum.

\- Add elements where the sum of row and column indices equals `N - 1` to calculate the secondary diagonal sum.

\- Return the absolute difference between the two sums.



\## Complexity Analysis



\- \*\*Time Complexity:\*\* O(N)

\- \*\*Space Complexity:\*\* O(1)



\## HackerRank



\[View Problem on HackerRank](https://www.hackerrank.com/challenges/diagonal-difference/problem)

