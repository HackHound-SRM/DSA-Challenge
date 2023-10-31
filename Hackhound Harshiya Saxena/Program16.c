#include<stdio.h>
int main()
{
    int t,n,c=0;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter digit to be searched : ");
    scanf("%d",&t);
     int num=n;
    while(n!=0)
    {
        int d=n%10;
        if(d==t)
        c++;
        n=n/10;
    }
    printf("The digit %d occurs %d times in %d",t,c,num);
}