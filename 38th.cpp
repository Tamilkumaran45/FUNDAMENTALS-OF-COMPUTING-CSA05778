#include <stdio.h>

int main() {
    float original_price, sale_price, discount = 0.1;

    printf("Enter the original price of the item: ");
    scanf("%f", &original_price);

    // Calculate and print sale prices for 5 days
    for (int i = 1; i <= 5; i++) {
        sale_price = original_price * (1 - (i - 1) * discount);
        printf("Sale price on day %d: $%.2f\n", i, sale_price);
    }

    return 0;
}
