#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 55) {
        printf("Ticket charge: $10.00\n");
    } else if (age >= 21) {
        printf("Ticket charge: $15.00\n");
    } else if (age >= 13) {
        printf("Ticket charge: $10.00\n");
    } else if (age >= 3) {
        printf("Ticket charge: $5.00\n");
    } else {
        printf("Ticket charge: Free\n");
    }

    return 0;
}
