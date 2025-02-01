/*Write a program that uses math.h for sqrt and pow to calculate the square root
and power of numbers.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double num, result;
    int power;

    // Input for square root
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("Square root of %.2lf is %.2lf\n", num, result);

    // Input for power
    printf("Enter a number and its power to calculate (base and exponent): ");
    scanf("%lf %d", &num, &power);
    result = pow(num, power);
    printf("%.2lf raised to the power of %d is %.2lf\n", num, power, result);

    return 0;
}

/*
Output:
Enter a number to calculate its square root: 2
Square root of 2.00 is 1.41

*/