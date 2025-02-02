/*Write a program to demonstrate the use of the following preprocessor directives:
#include, #define, #undef, #ifdef, #ifndef */

#include <stdio.h>    // #include directive

#define PI 3.14        // #define directive

// #ifdef and #ifndef directives
#ifdef DEBUG
    #define MSG "Debugging is enabled"
#else
    #define MSG "Debugging is disabled"
#endif

#ifndef MAX
    #define MAX 100
#endif

#undef PI           // #undef directive

int main() {
    // Demonstrating #ifdef, #ifndef, and #define usage
    printf("Message: %s\n", MSG);
    printf("Max value: %d\n", MAX);

    // PI has been undefined using #undef, so the next line will cause an error if used.
    // printf("PI: %.2f\n", PI); // This would give an error if uncommented

    return 0;
}

/*
Output:

Message: Debugging is disabled
Max value: 100

*/
