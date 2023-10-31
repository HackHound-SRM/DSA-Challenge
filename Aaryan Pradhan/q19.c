#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int nums[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&nums[i]);
    
    for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=n;k++)
        {
            if(j!=k && k>j)
                if(nums[j]==nums[k])
                    printf("%d",nums[j]);
                    
        }
    }
    return(0);
}