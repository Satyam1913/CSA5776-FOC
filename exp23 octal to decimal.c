#include <stdio.h>
#include <math.h>
int main() {
    int octal, decimal = 0, i = 0;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    while(octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }
    printf("The decimal equivalent of %d is %d.", octal, decimal);
}
