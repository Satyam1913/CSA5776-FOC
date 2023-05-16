#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum += pow(i, i);
    }
    printf("The sum of the series is %.0f\n", sum);
}
