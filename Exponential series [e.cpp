#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 1.0;
    int i, n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to be used in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double term = pow(-1, i) * pow(x, i) / tgamma(i+1);
        sum += term;
    }

    printf("The value of e^(-%.2f) is: %.4f\n", x, sum);

    return 0;
}
