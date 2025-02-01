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

/*
Output:

Enter a Number: 7
Multiplication Table for this Numbers is
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70

*/