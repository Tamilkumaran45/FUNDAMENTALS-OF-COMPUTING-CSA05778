#include <stdio.h>

int main() {
    int number, digit;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("The digits of the number are: ");

    // Handle the case for 0 separately
    if (number == 0) {
        printf("0");
    }

    // Process each digit of the number
    while (number != 0) {
        digit = number % 10;
        printf("%d ", digit);
        number /= 10;
    }

    printf("\n");

    return 0;
}
