# Custom Printf Implementation

Compile options:

gcc -Wall -Wextra -Werror -pedantic -std=gnu99 -Wno-format *.c

Handled specifiers: 

c - prints a character

s - prints a string

% - prints %

d - prints a signed decimal (base 10)

i - prints a signed integer in base 10

b - prints an unsigned integer converted to binary

u - prints an unsigned decimal (base 10)

o - prints an unsigned octal (base 8)

x - prints a number in hexidecimal (base 16) lower case

X - prints a number in hexidecimal (base 16) upper case

S - prints all characters of a string including Non printable characters (\x followed by the ASCII code value in hexadecimal)

p - prints a void * pointer argument in hexadecimal
