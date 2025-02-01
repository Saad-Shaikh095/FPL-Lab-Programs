/* Write a C program to construct a pyramid of numbers and start pattern as
follows:
1          *        1           1          *
1 2        * *      2 3         2 2        * *
1 2 3      * * *    4 5 6       3 3 3      * * *
1 2 3 4    * * * *  7 8 9 10    4 4 4 4    * *
                                           *
*/

#include <stdio.h>

int main() {
    int i, j, num;

    // Pattern 1: Number Pyramid
    printf("Pattern 1: Number Pyramid\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 2: Star Pyramid
    printf("Pattern 2: Star Pyramid\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 3: Number Pyramid with incrementing numbers
    printf("Pattern 3: Number Pyramid with Incrementing Numbers\n");
    num = 1;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 4: Number Pyramid with same numbers in each row
    printf("Pattern 4: Number Pyramid with Same Numbers in Row\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 5: Diamond Star Pattern
    printf("Pattern 5: Diamond Star Pattern\n");
    for (i = 1; i <= 3; i++) {  // Upper half of diamond
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i >= 1; i--) {  // Lower half of diamond
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
Output: 
Pattern 1: Number Pyramid
1
12
123
1234

Pattern 2: Star Pyramid
*
**
***
****

Pattern 3: Number Pyramid with Incrementing Numbers
1 
2 3 
4 5 6 
7 8 9 10 

Pattern 4: Number Pyramid with Same Numbers in Row 
1 
2 2 
3 3 3
4 4 4 4

Pattern 5: Diamond Star Pattern
*
**
***
**
*

*/