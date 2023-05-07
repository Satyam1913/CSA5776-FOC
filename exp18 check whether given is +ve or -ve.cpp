#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is a positive integer.", num);
    } else if (num < 0) {
        printf("%d is a negative integer.", num);
    } else {
        printf("You entered zero.");
    }
}
