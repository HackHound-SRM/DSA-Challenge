#include <stdio.h>
int main()
{
    int N,sum=0,a;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<N;j++)
    {
        int b=arr[j],k=5;
        while(k!=0)
        {
            a=b%10;
            sum+=a;
            b/=10;
            k--;
        }
        
        if(sum%3==0 || sum%4==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}