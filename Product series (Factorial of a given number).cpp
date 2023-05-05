#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    // Calculate the factorial
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %llu\n", n, factorial);

    return 0;
}
