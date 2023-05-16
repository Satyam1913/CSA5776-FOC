#include <stdio.h>
int main() {
    int decimal, quotient, remainder;
    char hexadecimal[100];
    int i = 0, j;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    quotient = decimal;
    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10) {
            hexadecimal[i++] = remainder + '0';
        } else {
            hexadecimal[i++] = remainder + 'A' - 10;
        }
        quotient /= 16;
    }
    printf("Hexadecimal number: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
}
