# Play fair 

You are already familiar with playfair so lets handle the special cases.

- You handle J as I.
- When two characters are in the same row, you take the one on the right.
- When two characters are in the same column, you take the one below.
- If you end up with one letter, you append 'X' since it is slightly used in all languages and almost never coupled with another 'X'.
- When two characters are the same, You separate them with 'X'
- If you get two consecutive 'X' ('XX') you separate them by the second least used character which is 'Q'
- You can play with reference algorithm at [http://www.online.crypto-it.net/eng/playfair.html] (http://www.online.crypto-it.net/eng/playfair.html)

Warning: The website is a playground to understand how things work. The website uses 'Q' rather than 'X' and 'V' rather than 'Q' so don't copy his solution.

## Input
2 lines. The first is the Key with Length > 0 The second is the plain text with Length > 0 All inputs are Uppercase letters with no spaces or special characters.

## Output
1 line containing the cipher text.

## Examples

input

KEYWORD

BALLOON

output

CBIZSCES

input

AECUSR

MEETINGS

output

ISSOHOMG
