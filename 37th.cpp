#include <stdio.h>

#define SALES_TAX 0.07 // Sales tax as a percentage

int main() {
    float initial_price, total_cost, accessory_price, sales_tax;
    int num_accessories, i;

    printf("Enter the initial price of the car: ");
    scanf("%f", &initial_price);

    total_cost = initial_price;

    printf("Enter the number of accessories: ");
    scanf("%d", &num_accessories);

    for (i = 0; i < num_accessories; i++) {
        printf("Enter the price of accessory %d: ", i+1);
        scanf("%f", &accessory_price);
        total_cost += accessory_price;
    }

    sales_tax = total_cost * SALES_TAX;
    total_cost += sales_tax;

    printf("The total cost of the car is: $%.2f\n", total_cost);

    return 0;
}
