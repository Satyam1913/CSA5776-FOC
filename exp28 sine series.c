#include <stdio.h>
#include <math.h>
double calculateSin(double x, int numTerms) {
    double sinValue = 0.0;
    int n;
    double term;
    for (n = 0; n < numTerms; n++) {
        term = pow(-1, n) * pow(x, (2 * n + 1)) / tgamma(2 * n + 2);
        sinValue += term;
    }
    return sinValue;
}
int main() {
    double x;
    int numTerms;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    double sinValue = calculateSin(x, numTerms);
    printf("The approximate value of sin(%lf) using %d terms is: %lf\n", x, numTerms, sinValue);
}
