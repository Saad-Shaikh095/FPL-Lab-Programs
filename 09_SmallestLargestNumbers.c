/*Write a C program to find both the largest and smallest number in a list of
integers.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    if (num1 < num2){
        printf("%d is Smallest integer\n %d is Largest integer", num1, num2);

    }
    
    else {
        printf("%d is Largest number\n %d is Smallest number", num1, num2);
    }

    return 0;

}

/*
Output:

Enter First Number: 7
Enter Second Number: 8
7 is Smallest integer
8 is Largest integer
 
 */