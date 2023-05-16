#include <stdio.h>
int main() {
    int n, i;
    int num, max;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("The biggest number is: %d\n", max);
}
