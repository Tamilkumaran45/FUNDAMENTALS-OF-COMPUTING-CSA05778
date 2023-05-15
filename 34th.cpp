#include <stdio.h>

int main() {
    int num_people;
    float base_price, total_price;
    char business, senior;

    // Get input from user
    printf("Number of people staying: ");
    scanf("%d", &num_people);
    printf("Base price of room: $");
    scanf("%f", &base_price);
    printf("Customer on business? (Y/N): ");
    scanf(" %c", &business);
    printf("Customer over 60 years old? (Y/N): ");
    scanf(" %c", &senior);

    // Calculate total price
    if (num_people == 2) {
        total_price = base_price;
    } else if (num_people == 3) {
        total_price = base_price + 5;
    } else if (num_people == 4) {
        total_price = base_price + 10;
    } else {
        total_price = base_price + (num_people - 4) * 6;
    }

    // Apply discounts
    if (business == 'Y') {
        total_price *= 0.8;
    } else if (senior == 'Y') {
        total_price *= 0.85;
    }

    // Print total price
    printf("Total cost of room: $%.2f\n", total_price);

    return 0;
}
