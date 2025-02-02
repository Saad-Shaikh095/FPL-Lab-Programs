/*Write a C program to create multiple records using arrays of structures. The user
should be able to input details for each record and display them as needed. */

#include <stdio.h>

struct Record {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Asking user how many records they want to create
    printf("Enter the number of records: ");
    scanf("%d", &n);

    struct Record records[n];  // Array of structures to store records

    // Input details for each record
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for record %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &records[i].id);
        printf("Name: ");
        scanf("%s", records[i].name);
        printf("Marks: ");
        scanf("%f", &records[i].marks);
    }

    // Display records
    printf("\nDisplaying records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nRecord %d:\n", i + 1);
        printf("ID: %d\n", records[i].id);
        printf("Name: %s\n", records[i].name);
        printf("Marks: %.2f\n", records[i].marks);
    }

    return 0;
}

/*
Output:

Enter the number of records: 4

Enter details for record 1:
ID: 1234
Name: Lochana
Marks: 92

Enter details for record 2:
ID: 5432
Name: Satvik
Marks: 99

Enter details for record 3:
ID: 6587
Name: Shravani 
Marks: 100

Enter details for record 4:
ID: 9876
Name: Siddhesh
Marks: 90

Displaying records:

Record 1:
ID: 1234
Name: Lochana
Marks: 92.00

Record 2:
ID: 5432
Name: Satvik
Marks: 99.00

Record 3:
ID: 6587
Name: Shravani
Marks: 100.00

Record 4:
ID: 9876
Name: Siddhesh
Marks: 90.00

*/