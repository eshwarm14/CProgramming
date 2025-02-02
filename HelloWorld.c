#include <stdio.h> // Include the standard input/output library
#include <stdbool.h> // Include the standard boolean library

int main(){
    /* Escape Sequence: character combination consisting of a backslash \
       follwoed by a letter or combination of digits.
       They specify actions within a line or a string of text.
       \n = newline
       \t = tab */
    printf("Hello\tWorld!\n");
    printf("I like Pizza!\n");
    printf("Its\treally\tgood!\n");
    printf("\"I like Pizza!\" - For the love of Pizza\n"); // \" is used to print double quotes

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
    return 0; // Return 0 to the operating system if the program ran successfully else return 1
}
