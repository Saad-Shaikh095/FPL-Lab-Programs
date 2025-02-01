/* Write a C program to find the largest among three numbers. The program should
take three numbers as input from the user.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    //Asking User Three Numbers.
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //If the num1 is greater than or equal to num2 and num3 then num1 is the Largest Number.
    if (num1 >= num2 && num1 >= num3) {
        printf("The Largest Number is %d", num1);
    }

    //If the num2 is greater than or equal to num1 and num3 then num2 is the Largest Number.
    else if(num2 >= num1 && num2 >= num3) {
        printf("The Largest Number is %d", num2);
    }

    //If both condition does not satisfy then num3 is the Largest Number.
    else {
        printf("The Largest Numbers is %d", num3);
    }

    return 0;

}

/*
Output:

Enter Three Numbers: 78 56 97
The Largest Numbers is 97

*/
