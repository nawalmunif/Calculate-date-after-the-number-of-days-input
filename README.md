# Calculate-date-after-the-number-of-days-input
It is written in C++ using DEV software.
It is a basic program for C++ OOP learners.
The calculator
repeatedly reads in three numbers (in a line) from the standard input that is interpreted as
dayofmonth, month and daysafter. This program calculates the days of the week for the dates
and outputs the information. For example, input “1 1 31” is interpreted as the following: the
first 1 means the 1st day in January; the second 1 means the 1st month in the year, January;
and the 31 means 31 days after the date 1 January 2020 (we assume the year is 2020 to
simplify the program), which is Saturday on 1 February 2020. More specifically, for input “1
1 31”, the calculator should produce the following output:
“31 days after Wednesday, 1 January 2020 is Saturday, February 1, 2020. “
The first input number must be a day in the month (e.g. for 1-31 for January, 1-29 for
February, and so forth). The second input number must be from 1 to 12 representing the 12
months in 2020. The third number is larger than or equal to 0 and must be less than 100. The
program should report an error (and exit) if the input is incorrect.
Few Sample inputs are:
Input
1 1 20
Output
20 days after Wednesday,1 January 2020 is Tuesday, 21 January 2020.
Input
1 2 0
Output
0 days after Saturday, 1 February 2020 is Saturday, 1 February 2020.
