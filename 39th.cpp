#include <stdio.h>

int main() {
    float loan = 3000.0, payment = 85.0, interest_rate = 0.01;
    int months = 0, years = 0;
    float balance = loan, total_interest = 0.0, interest = 0.0, principal = 0.0;

    printf("Month\tPayment\tInterest\tPrincipal\tBalance\n");
    while (balance > 0) {
        interest = balance * interest_rate;
        principal = payment - interest;
        balance -= principal;

        total_interest += interest;
        months++;
        if (months % 12 == 0) {
            years++;
        }

        printf("%d\t%.2f\t%.2f\t\t%.2f\t\t%.2f\n", months, payment, interest, principal, balance);

        if (balance < payment) {
            payment = balance + interest;
        }
    }

    printf("\nTotal interest paid: $%.2f\n", total_interest);
    printf("Years to pay off loan: %d years %d months\n", years, months % 12);
    return 0;
}
