# DES Key Generation

Key Generation in DES is not a straightforward process. Can you implement it?

PC1 { 57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36, 63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4 }

PC2 { 14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10, 23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2, 41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32 }

Rotations { 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1 }

### Input
The input consists of a single line that has 16 Hex characters which represent the key going into DES.

### Output
The output should consist of 16 lines each of which contains 12 Hex characters(Must use numbers and capital letters) that represent the 48-bit keys going getting into each round respectively.

Example

input

00000000FFFFFFFF

output

7B14E93A4B26

5998F9164926

95E8FA8429D4

B66F86E1A2D1

7A3F0573860B

49B47D1E150E

C5C4FE0C71E4

F6CBA260E8E1

F69B2362E859

ABBA47A3951A

2976DE8D1722

7455F85C4A64

D6C97150C8DC

8FEB1781B499

2F378FAB3621

6B178D3B5223
