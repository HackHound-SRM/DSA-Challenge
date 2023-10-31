#include<stdio.h>
int fac(int n)
{
    if(n>=1)
    return (n)*fac(n-1);
    else
    return 1;
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Factorial is %d",fac(n));
}