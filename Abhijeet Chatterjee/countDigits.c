#include<stdio.h>
int main()
{
    int n,k,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a digit to search for: ");
    scanf("%d",&k);
    while(n!=0)
    {
        int r = n%10;
        if(r==k)
            c++;
        n=n/10;
    }
    printf("Number of times %d appears is: %d",k,c);
    return 0;
}