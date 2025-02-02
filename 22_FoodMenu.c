/*Write a C program to create and display a food menu card, allowing the user to
place an order, modify their order, adjust quantities, and view the total bill after
any changes. */

#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;

    // Food menu
    printf("Food Menu:\n1. Vada Pav ---- 20 Rs\n2. Samosa ---- 15 Rs\n3. Soda ---- 20 Rs\n");
    
    // Loop for ordering
    while (1) {
        printf("\nEnter item number (1-3) or 0 to finish: ");
        scanf("%d", &choice);
        
        if (choice == 0) break;  // Exit loop

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (choice == 1) total += 20 * quantity;
        else if (choice == 2) total += 15 * quantity;
        else if (choice == 3) total += 20 * quantity;
        else printf("Invalid choice.\n");

        printf("\nCurrent Total: Rs%.2f\n", total);
    }

    printf("\nFinal Total Bill: Rs%.2f\n", total);
    return 0;
}

/*
Output:

Food Menu:
1. Vada Pav ---- 20 Rs
2. Samosa ---- 15 Rs
3. Soda ---- 20 Rs

Enter item number (1-3) or 0 to finish: 1
Enter quantity: 2

Current Total: Rs40.00

Enter item number (1-3) or 0 to finish: 2
Enter quantity: 3

Current Total: Rs85.00

Enter item number (1-3) or 0 to finish: 3
Enter quantity: 4

Current Total: Rs165.00

Enter item number (1-3) or 0 to finish: 0

Final Total Bill: Rs165.00

*/