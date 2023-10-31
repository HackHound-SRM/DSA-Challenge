#include<stdio.h>
int main()
{
    int cel;
    printf("Enter temperature in degree celsius:");
    scanf("%d",&cel);
    double rel=((cel*9.0)/5.0)+32.0;
    printf("Temperature in fahrenheit is : %.2f",rel);
}