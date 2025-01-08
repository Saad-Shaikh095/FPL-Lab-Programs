// Write a program to Calculate the factorial of an entered number.

#include <stdio.h>

int main() {
    int num, fact = 1; 
    
    //Asking user to enter a number.
    printf("Enter a Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of this Number is: %d\n", fact);

    return 0;

}