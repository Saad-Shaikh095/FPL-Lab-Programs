/*Write a C program to display a pattern like a right-angled triangle using asterisks
(*). Also, explain the logic of the program.
*/

#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

/*
Output:
Enter the number of rows: 7
*      
**     
***    
****   
*****  
****** 
*******

*/
