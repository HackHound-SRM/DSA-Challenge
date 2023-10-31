#include<stdio.h>
int main() {
    float c, f;
    printf("Enter the temterature in celcius:\n>>>");
    scanf("%f", &c);
    f = ((c * 9)/5) + 32;
    printf("The temperature in farenheit is:\n>>>%0.2f", f);
    return 0;
}