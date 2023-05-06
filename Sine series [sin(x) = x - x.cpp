#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0.0;
    int i, n;

    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to be used in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double term = pow(-1, i - 1) * pow(x, 2 * i - 1) / tgamma(2 * i);
        sum += term;
    }

    printf("The sine of %.2f radians is: %.4f\n", x, sum);

    return 0;
}
