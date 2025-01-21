#include <stdio.h>

//Declares the function gcd, which calculates the greatest common denominator of 2
//numbers
int gcd(int num1, int num2) {
    int small = (num1 > num2) ? num1: num2, i;
    for (i = small; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            return i;
        }
    }
}
int main() {
    int num1, num2;
    //Prompts the user to enter the first number and stores that number in num1
    printf("Please input the first number: ");
    scanf("%d", &num1);
    //Prompts the user to enter the first number and stores that number in num2
    printf("Please input the second number: ");
    scanf("%d", &num2);
    //Prints the statement below, with the first two numbers being the numbers the
    //user inputted, and the last number being
    //greatest common denominator as calculated by the function gcd
    printf("The commom divisor for %d and %d is %d", num1, num2, gcd(num1, num2));
    return 0;
}
//Assignment 2.2
// © 2024 Logan Kerner <lo660771@ucf.edu>
