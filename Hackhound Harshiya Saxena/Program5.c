#include<stdio.h>
int even(int num)
{
    int s=0;
    while(num!=0)
    {
        int d=num%10;
        if(d%2==0)
        s=s+d;
        num=num/10;
    }
    return s;
    
}
int odd(int num)
{
    int s=0;
    while(num!=0)
    {
        int d=num%10;
        if(d%2!=0)
        s=s+d;
        num=num/10;
    }
    return s;
    
}
int main()
{
    int t;
    printf("Enter number of test cases : ");
    scanf("%d",&t);
    int temp=t;
    int num[t];
    int c=0;
    while(t--)
    {
        printf("Enter numbers : ");
        scanf("%d",&num[c]);
        c++;
    }
    c=0;
    while(temp--)
    {
        if(odd(num[c])%3==0 || even(num[c])%4==0)
        printf("Yes \n");
        else
        printf("No \n");
        c++;
    }
    return 0;
}