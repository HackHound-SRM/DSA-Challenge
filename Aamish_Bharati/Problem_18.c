/*Problem 18: Max of an array
Given an integer array nums, return the largest element present in the
array.
Sample Input: [5, 0, -1, 3, 6, 9, 2, 7]
Sample Output: 9
Challenge: Can number of operations be reduced to n?*/

#include <stdio.h>

int main()
{
    int nums[8]={5,0,-1,3,6,9,2,7};
    
    int largest=nums[0];
    
    for(int i=1;i<=8;i++)
    {
        if(largest<nums[i])
            largest=nums[i];
    }
    printf("%d",largest);
    return 0;
}