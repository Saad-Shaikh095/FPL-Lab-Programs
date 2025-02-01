/*Write a C program that sorts a given array of names.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    
    char names[n][100]; // Array to store names
    
    // Input names
    for(int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sort names alphabetically
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output sorted names
    printf("\nSorted names:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

/*
Output:
Enter number of names: 6
Vedant
Satvik
Lochana
Shravani
Siddhesh1
Siddhesh2

Sorted names:
Lochana      
Satvik       
Shravani     
Siddhesh1    
Siddhesh2    
Vedant

*/
