/*Write a program that manages a contact list using structures to store information
about each contact, including their name and phone number */

#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);

    struct Contact contacts[n];

    // Input contacts' details
    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", contacts[i].name);
        printf("Enter phone number: ");
        scanf("%s", contacts[i].phone);
    }

    // Display contacts
    printf("\nContact List:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
    }

    return 0;
}

/*
Output:

Enter number of contacts: 2

Enter name: Alice
Enter phone number: 1234567890

Enter name: Bob
Enter phone number: 9876543210

Contact List:
Name: Alice, Phone: 1234567890
Name: Bob, Phone: 9876543210

*/