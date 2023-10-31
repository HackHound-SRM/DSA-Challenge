/*Problem 15: Two Sum
Given an array of integer numbers and an integer target, return
indices of the two numbers such that they add up to the target. You
may assume that each input would have exactly one solution, and you
may not use the same element twice. You can return the answer in
any order.
*/

#include <stdio.h>

int main()
{
    int nums[]={},target,N;
    scanf("%d",&N);
    scanf("%d",&target);
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(nums[i]+nums[j]==target && i<j)
            {
                printf("[%d,%d]\n",i,j);
        nums[i]=0;
        nums[j]=0;
            }
        }
    }
    return 0;
}
