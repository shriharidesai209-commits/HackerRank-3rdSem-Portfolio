\# Time Conversion



\## Problem Description



Given a time in 12-hour AM/PM format, convert it into 24-hour military time format.



\## Approach



\- Read the given time string.

\- Check whether the time is AM or PM.

\- Handle the special cases:

&#x20; - `12:xx:xxAM` becomes `00:xx:xx`

&#x20; - `12:xx:xxPM` remains `12:xx:xx`

\- Convert other PM hours by adding 12.

\- Return the resulting 24-hour formatted time.



\## Complexity Analysis



\- \*\*Time Complexity:\*\* O(1)

\- \*\*Space Complexity:\*\* O(1)



\## HackerRank



\[View Problem on HackerRank](https://www.hackerrank.com/challenges/time-conversion/problem)

