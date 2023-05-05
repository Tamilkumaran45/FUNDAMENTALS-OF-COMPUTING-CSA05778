#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Reverse the digits
    while (number != 0) {
        remainder = number % 10;        // Extract the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append the digit to the reversed number
        number /= 10;                   // Remove the last digit
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
