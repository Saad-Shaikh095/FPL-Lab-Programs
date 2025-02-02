/*Create a C program using structures to manage and track employee information
for a company. The program should allow input of multiple employee details,
store them, and then display the information. Use the appropriate data types and
functions to achieve the required functionality */

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void inputEmployee(struct Employee *emp) {
    printf("Enter name: ");
    scanf("%s", emp->name);
    printf("Enter ID: ");
    scanf("%d", &emp->id);
    printf("Enter salary: ");
    scanf("%f", &emp->salary);
}

void displayEmployee(struct Employee emp) {
    printf("\nEmployee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }

    // Display employee details
    for (int i = 0; i < n; i++) {
        displayEmployee(employees[i]);
    }

    return 0;
}

/*
Output:

Enter number of employees: 2

Employee 1:
Enter name: Alice
Enter ID: 101
Enter salary: 50000

Employee 2:
Enter name: Bob
Enter ID: 102
Enter salary: 55000

Employee Information:
Name: Alice
ID: 101
Salary: 50000.00

Employee Information:
Name: Bob
ID: 102
Salary: 55000.00

*/