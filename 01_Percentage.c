/* Write a program that declares Class awarded for a given percentage of marks,
where mark <40%= Failed, 40% to <60% = Second class, 60% to <70%=First
class, >= 70% = Distinction. Read percentage from standard input.
*/

# include <stdio.h>

int main() {
    int percentage;

    //Asking User for Percentage.
    printf("Enter you Percentage: ");
    scanf("%d", &percentage);

    //If percentage less than 40 it will print Failed.
    if (percentage < 40) {
        printf("Failed");
    }
    
    //If percentage is more than 40 and less than 60 it will print Second Class.
    else if (percentage >= 40 && percentage < 60) {
        printf("Second Class");
    }
    
    //If percentage is more than 60 and less than 70 it will print First Class.
    else if(percentage >= 60 && percentage < 70) {
        printf("First Class");
    }
    
    //If percentage is more than or equal to 70 it will print Distinction.
    else if (percentage >= 70){
        printf("Distinction\n");
    }
    
    return 0;

}