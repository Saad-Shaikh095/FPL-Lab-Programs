/*Write a C program for a calculator that performs multiple arithmetic operations
(addition, subtraction, multiplication, division, modulus) and handles multiple
calculations, allowing the user to continue performing different operations until
they choose to exit. */

#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    while (1) {
        printf("Enter an operator (+, -, *, /, %% or q to quit): ");
        scanf(" %c", &operator);
        if (operator == 'q') break;

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+': printf("Result: %.2lf\n", num1 + num2); break;
            case '-': printf("Result: %.2lf\n", num1 - num2); break;
            case '*': printf("Result: %.2lf\n", num1 * num2); break;
            case '/': printf("Result: %.2lf\n", num1 / num2); break;
            case '%': printf("Result: %.2lf\n", (int)num1 % (int)num2); break;
            default: printf("Invalid operator!\n");
        }
    }
    return 0;
}

/*
Output:
Enter an operator (+, -, *, /, % or q to quit): +
Enter two numbers: 10 5
Result: 15.00
Enter an operator (+, -, *, /, % or q to quit): -
Enter two numbers: 10 5
Result: 5.00
Enter an operator (+, -, *, /, % or q to quit): *
Enter two numbers: 10 5
Result: 50.00
Enter an operator (+, -, *, /, % or q to quit): /
Enter two numbers: 10 5
Result: 2.00
Enter an operator (+, -, *, /, % or q to quit): %
Enter two numbers: 10 5
Result: 0.00
Enter an operator (+, -, *, /, % or q to quit): q

*/