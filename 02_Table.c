/* Write a C program to perform multiplication of an entered number of tasks.
Accept an integer input from the user. Generate and display the multiplication
table for the entered number up to 10.
*/

#include <stdio.h>

int main() {
    int num,i;

    //Asking User to Enter a Number.
    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Multiplication Table for this Numbers is\n");
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}