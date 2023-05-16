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
    double term = pow(-1, n) * pow(x, 2 * n) / calculateFactorial(2 * n);
    return term;
}
double calculateCos(double x, int numTerms) {
    double cosValue = 0;
    int n;
    for (n = 0; n < numTerms; n++) {
        double term = calculateTerm(x, n);
        cosValue += term;
    }
    return cosValue;
}
int main() {
    double x;
    int numTerms;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    double cosValue = calculateCos(x, numTerms);
    printf("The approximate value of cos(%lf) using %d terms is: %lf\n", x, numTerms, cosValue);
    return 0;
}
