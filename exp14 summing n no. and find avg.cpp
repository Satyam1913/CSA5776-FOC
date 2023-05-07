#include <stdio.h>
int main() {
    int n, i, num;
    float sum = 0.0, avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    avg = sum / n;
    printf("The sum of %d numbers is %.2f\n", n, sum);
    printf("The average of %d numbers is %.2f\n", n, avg);
}

