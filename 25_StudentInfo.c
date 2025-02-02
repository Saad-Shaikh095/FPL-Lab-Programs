/*Write a program that defines a structure for storing student information (name,
roll number, and marks) and then takes input from the user, stores it in the
structure, and displays the information. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display student details
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}

/*
Output:

Enter name: Saad
Enter roll number: 100
Enter marks: 90

Student Information:
Name: Saad
Roll Number: 100    
Marks: 90.00   

*/