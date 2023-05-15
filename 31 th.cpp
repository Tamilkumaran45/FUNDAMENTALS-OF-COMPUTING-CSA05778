#include <stdio.h>

int main() {
    float cubic_feet_used, bill_amount;
    
    printf("Enter the cubic feet of water used: ");
    scanf("%f", &cubic_feet_used);
    
    if (cubic_feet_used <= 1000) {
        bill_amount = 15.00;
    }
    else if (cubic_feet_used > 1000 && cubic_feet_used <= 2000) {
        bill_amount = (cubic_feet_used - 1000) * 0.0175 + 15.00;
    }
    else if (cubic_feet_used > 2000 && cubic_feet_used <= 3000) {
        bill_amount = (cubic_feet_used - 2000) * 0.02 + 42.50;
    }
    else if (cubic_feet_used > 3000) {
        bill_amount = 70.00;
    }
    
    printf("Your water bill is: $%.2f\n", bill_amount);
    
    return 0;
}
