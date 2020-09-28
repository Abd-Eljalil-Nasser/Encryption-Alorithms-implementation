# DES - Decryption

### Input
The input consists of 3 lines The first line consists of 16 Hex characters which represent the key. The second line consists of 16 Hex characters which represent the ciphertext. The third line consists of a single number N(0 ≤ N ≤ 1000) which represents the number of times you should run the decryption.

### Output
The output should consist of a single line that has 16 Hex characters and represents the plaintext.

### Examples

input

0123456789ABCDEF

56CC09E7CFDC4CEF

1

output

0123456789ABCDEF

input

0123456789ABCDEF

0123456789ABCDEF

1

output

ED31057490F985DD

input

0123456789ABCDEF

56CC09E7CFDC4CEF

2
output

ED31057490F985DD
