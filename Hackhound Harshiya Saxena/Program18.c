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
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    printf("Largest integer in array is %d",max);
    
}