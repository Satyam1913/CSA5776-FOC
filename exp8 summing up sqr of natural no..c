#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum += i*i + 1; // Add the next term to the sum
    }
    printf("The sum of the series is %d\n", sum);
}
