#include <stdio.h> // Include the standard input/output library
#include <stdbool.h> // Include the standard boolean library

int main(){
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    float item4 = 5000.50;
    printf("item 1: $%f\n", item1); // %0.2f is a format specifier for floating point number
    printf("item 2: $%0.2f\n", item2); // %0.2f is a format specifier for floating point number with 2 decimal places
    printf("item 3: $%8.2f\n", item3); // %8.2f is a format specifier for floating point number with 2 decimal places and 8 characters wide
    printf("item 4: $%-7.2f\n", item4); // %-7.2f is a format specifier for floating point number with 2 decimal places and 7 characters wide left justified
    return 0; // Return 0 to the operating system if the program ran successfully else return 1
}

