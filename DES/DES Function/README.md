# DES Function 

DES Encryption has many stages. One of the stages is a function F that takes as its input a block of 32-bits(half of the input block to the DES) and a key that is 48-bits then produces a 32-bit output. The functionality of F can be seen in the following figure

![](https://github.com/Abd-Eljalil-Nasser/Encryption-Alorithms-implementation/blob/master/DES/DES%20Function/1.png)


The expansion P-box table is given below:

![](https://github.com/Abd-Eljalil-Nasser/Encryption-Alorithms-implementation/blob/master/DES/DES%20Function/2.png)

The Straight P-box table is given below:

![](https://github.com/Abd-Eljalil-Nasser/Encryption-Alorithms-implementation/blob/master/DES/DES%20Function/3.png)

The 32-bit input first pass through an expansion box(Which is just similar to the permutation box you implemented(hopefully) in the first problem.) The output of the expansion box is XORed with the 48-bit key and the result is passed through the 8 S-boxes you implemented in the previous problem to produce 32-bit output that passes through a straight permutation box.

### Input
The input consists of 2 lines. The first line consists of 8 Hex characters that represent the 32-bit input block. The second line consists of 12 Hex characters that represent the 48-bit key block that is also an input to the function.

### Output
The output should consist of a single line that has 8 Hex characters which represent the output of the F function given the inputs above .


