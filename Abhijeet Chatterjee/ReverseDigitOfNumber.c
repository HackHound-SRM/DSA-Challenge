#include<stdio.h>
int main()
{
    //Reverse of digits of number
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int reverse = 0;
    while(n!=0)
    {
        int r = n%10;
        reverse = reverse*10 + r;
        n = n/10;
    }
    printf("\nReverse number: %d",reverse);
    return 0;
}