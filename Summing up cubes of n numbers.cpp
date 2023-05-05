#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += (i * i);
        }
    }

    printf("The sum of the squares of odd numbers up to %d is: %d\n", n, sum);

    return 0;
}
