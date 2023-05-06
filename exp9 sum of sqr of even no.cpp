#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i+=2) {
        sum += i*i; // Add the next term to the sum
    }
    printf("The sum of the series is %d\n", sum);
}
