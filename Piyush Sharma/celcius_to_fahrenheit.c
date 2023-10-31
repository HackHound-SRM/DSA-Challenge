#include <stdio.h>
int main() {
    float c,f;
    printf("Enter temperature in celcius:");
    scanf("%f", &c);
    f=((c*(1.8))+32);
    printf("Temperature in fahrenheit: %.2f",f);
    return 0;
}