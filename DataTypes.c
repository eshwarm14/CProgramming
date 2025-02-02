#include <stdio.h> // Include the standard input/output library
#include <stdbool.h> // Include the standard boolean library

int main(){
    int x; // Declare a variable x of type integer - Declaration
    x = 123; // Assign the value 123 to the variable x - Initialization
    int y = 321; // Declare and Initialize a variable y of type integer - Decalration and Initialization
    int age = 21; // Integer
    float gpa = 2.05; // Floating Point Number
    char grade = 'C'; // Character
    char name[] = "Cprogramming"; //Array of Characters

    printf("Hello %s\n", name); // %s is a format specifier for string
    printf("You are %d years old\n", age); // %d is a format specifier for integer
    printf("Your average grade is %c\n", grade); // %c is a format specifier for character
    printf("Your gpa is %f\n", gpa); // %f is a format specifier for floating point number


    float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits, format specifier %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits, format specifier %lf 
    printf("c = %0.15f\n", c); // Print the value of c with 15 decimal places but since c is float it loses precision after 6 - 7 digits
    printf("d = %0.15lf\n", d); // Print the value of d with 15 decimal places but since d is double it retains precision after 15 - 16 digits

    bool e = true; // 1 byte (8 bits) true or false, format specifier %d
    printf("e = %d\n", e); // Print the value of e as an integer

    char f = 100; // 1 byte (8 bits) -128 to 127, format specifier %c or %d
    unsigned char g = 255; // 1 byte (8 bits) 0 to 255, format specifier %c or %d
    printf("f = %c\n", f); // Print the value of f as a character
    printf("f = %d\n", f); // Print the value of f as an integer
    printf("g = %d\n", g); // Print the value of g as a character

    short int h = 32767; // 2 bytes (16 bits) -32768 to 32767, format specifier %d
    unsigned short int i = 65535; // 2 bytes (16 bits) 0 to 65535, format specifier %d
    printf("h = %d\n", h); 
    printf("i = %d\n", i); 

    int j = 2147483647; // 4 bytes (32 bits) -2147483648 to 2147483647, format specifier %d
    unsigned int k = 4294967295; // 4 bytes (32 bits) 0 to 4294967295, format specifier %d
    printf("j = %d\n", j); 
    printf("k = %u\n", k); // %u is a format specifier for unsigned integer

    long int l = 2147483647; // 4 bytes (32 bits) -2147483648 to 2147483647, format specifier %ld
    long long int m = 9223372036854775807; // 8 bytes (64 bits) -9 quintillion to 9 quintillion, format specifier %lld
    unsigned long long int n = 18446744073709551615U    ; // 8 bytes (64 bits) 0 to 18 quintillion, format specifier %llu
    printf("l = %ld\n", l);
    printf("m = %lld\n", m);
    printf("n = %llu\n", n);
    return 0; // Return 0 to the operating system if the program ran successfully else return 1
}
