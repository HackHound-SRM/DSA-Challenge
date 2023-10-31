/*Problem 20: Sort the array
Given an integer array nums, sort it in descending order (from largest
to smallest element) and return the sorted array.
Note: You are not allowed to use the built-in sort() function.
Sample Input : [5, 0, -1, 3, 6, 9, 2, 7]
Sample Output: [9, 7, 6, 5, 3, 2, 0, -1]*/

#include <stdio.h>

void main()
{
    int nums[]={5, 0, -1, 3, 6, 9, 2, 7};
    
    for(int i=0;i<=8;i++)
    {
        for(int j=0;j<=8;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    for(int k;k<=8;k++)
    {
        printf("%d,",nums[k]);
    }
}