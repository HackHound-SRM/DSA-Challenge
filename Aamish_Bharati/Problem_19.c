/*Problem 19: Find Duplicates
Given an array of integers nums containing n + 1 integers where each
integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated
number.
You must solve the problem without modifying the array nums and
uses only constant extra space.*/

#include <stdio.h>

void main()
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
}