#include<stdio.h>
int main()
{
    int c=0;
    for(int i=4;i>=0;i--)
    {
        for(int k=i;k>0;k--)
        printf(" ");
        for(int j=0;j<=c;j++)
        printf("*");
        c++;
        printf("\n");
    }
}