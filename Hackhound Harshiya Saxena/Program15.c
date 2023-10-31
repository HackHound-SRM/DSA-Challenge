#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter number of inputs : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter target : ");
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==t)
            printf ("[%d , %d]",i,j);
        }
    }
}