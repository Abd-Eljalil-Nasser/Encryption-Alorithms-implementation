# DES - Encryption

If you have been following the contests, you should have by now written each complex component of DES. Combine them into one program to run full DES encryption using the given key on the given plaintext. You should encrypt the given plaintext N times.

### Input
The input consists of 3 lines The first line consists of 16 Hex characters which represent the key. The second line consists of 16 Hex characters which represent the plaintext. The third line consists of a single number N(0 ≤ N ≤ 1000) which represents the number of times you should run the encryption.

### Output
The output should consist of a single line that has 16 Hex characters and represents the ciphertext.

### Examples

input

0000000000000000

FFFFFFFFFFFFFFFF

1

output

355550B2150E2451

input

0000000000000000

355550B2150E2451

1

output

FFFFFFFFFFFFFFFF

input

0000000000000000

FFFFFFFFFFFFFFFF

2

output

FFFFFFFFFFFFFFFF
