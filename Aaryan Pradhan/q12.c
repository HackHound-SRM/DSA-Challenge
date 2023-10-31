#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(int x=1;x<=5-i;x++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}