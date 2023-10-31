#include <stdio.h>

int main()
{
    int arr[]={5, 0, -1, 3, 6, 9, 2, 7};
    
    for(int i=0;i<=8;i++)
    {
        for(int j=0;j<=8;j++)
        {
            if(arr[i]>arr[j])
            {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(int k;k<=8;k++)
    {
        printf("%d,",arr[k]);
    }
    return(0);  
}