#include <stdio.h>

int main() {
    // constant = fixed value that cannot be altered by the program during its execution.
    const float PI = 3.14159; // PI is a constant and usually written in uppercase, value cannot be changed
    printf("PI = %f\n", PI);


    // Arithmetic Operators
    int x = 5;
    int y = 2;

    int a = x + y; // Addition
    int b = x - y; // Subtraction
    int c = x * y; // Multiplication
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    float d = x / (float) y; // Division
    printf("d = %0.2f\n", d);

    int e = x % y; // Modulus
    printf("e = %d\n", e);

    x++; // Increment
    y--; // Decrement
    printf("f = %d\n", x);
    printf("g = %d\n", y);


    // Augmented Assignment Operators
    /* Theyare used to replace a statement where an operator takes a variable as one of its operands 
       and then assigns the result back to the variable.
       +=, -=, *=, /=, %= 
       x += 5; is equivalent to x = x + 5; */

    int w = 10;
    w+=1;
    w-=1;
    w*=2;
    w/=2;
    w%=2;

    return 0;
}