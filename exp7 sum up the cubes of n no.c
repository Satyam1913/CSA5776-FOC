#include <stdio.h>
int main() {
    int n, i, num, sum = 0;
    printf("Enter the number of integers you want to cube: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum += (num * num * num);
    }
    printf("The sum of the cubes of the %d integers is %d.\n", n, sum);
    return 0;
}
