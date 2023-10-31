#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of integers : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter array element %d : ",(i+1));
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is repeated",arr[i]);
                break;
            }
        }
    }
}