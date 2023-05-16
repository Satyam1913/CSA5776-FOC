#include <stdio.h>
#include <math.h>
double calculateFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}
double calculateTerm(double x, int n) {
    double term = pow(-1, n) * pow(x, n) / calculateFactorial(n);
    return term;
}
double calculateExponential(double x, int numTerms) {
    double exponentialValue = 0;
    int n;
    for (n = 0; n < numTerms; n++) {
        double term = calculateTerm(x, n);
        exponentialValue += term;
    }
    return exponentialValue;
}
int main() {
    double x;
    int numTerms;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    double exponentialValue = calculateExponential(x, numTerms);
    printf("The approximate value of e^(-1) using %d terms is: %lf\n", numTerms, exponentialValue);
}
