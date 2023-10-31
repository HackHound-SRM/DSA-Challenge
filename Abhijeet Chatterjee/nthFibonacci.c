#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    
    for(int i=2; i<=n; i++)
    {
        int temp = a+b;
        a = b;
        b = temp;
       
    }
    printf("%d",b);
    return 0;
}