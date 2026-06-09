#include <stdio.h>

// Function declaration
unsigned long long factorial(int n);

int main() {
    int num;
    unsigned long long result;

    // Get input from the user
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check for negative input values
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}

/**
 * Recursive function to calculate the factorial of a number
 */
unsigned long long factorial(int n) {
    // Base Case: 0! and 1! are always 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive Case: n! = n * (n - 1)!
    return n * factorial(n - 1);
}