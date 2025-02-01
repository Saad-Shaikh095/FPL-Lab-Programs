/* Write a C program to read the age of a candidate and determine whether he is
eligible to vote or not.
*/

#include <stdio.h>

int main() {
    int age;

    //Taking Age of the User 
    printf("Enter Your Age: ");
    scanf("%d", &age);

    //If the Age is equal to or greater 18 then you are Eligible to Vote.
    if (age >= 18) {
        printf("You are Eligible to Vote");
    }
    
    else {
        printf("You are NOT Eligible to Vote");

    }

    return 0;
}

/*
Output:

Enter Your Age: 19
You are Eligible to Vote

*/