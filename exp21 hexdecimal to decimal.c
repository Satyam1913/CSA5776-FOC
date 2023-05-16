#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char hex[17];
    long long decimal = 0;
    int i, val, len;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    len = strlen(hex);
    for(i=0; hex[i]!='\0'; i++) {
        len--;
        if(hex[i]>='0' && hex[i]<='9')
            val = hex[i] - 48;
        else if(hex[i]>='a' && hex[i]<='f')
            val = hex[i] - 97 + 10;
        else if(hex[i]>='A' && hex[i]<='F')
            val = hex[i] - 65 + 10;
        else {
            printf("Invalid hexadecimal number.\n");
            return 0;
        }   
        decimal += val * pow(16, len);
    }
    printf("The decimal equivalent of %s is %lld.", hex, decimal);
}
