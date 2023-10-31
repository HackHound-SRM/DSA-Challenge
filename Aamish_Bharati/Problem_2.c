/*
Problem 2: Reverse digits of a number
Given an integer N, reverse the digits of N. Remember that you need
to make changes to the same number.
Example 1:
Input: 32
Output: 23
Example 2:
Input: C = 7250
Output: 52
*/

#include <stdio.h>
int main()
{
    int num,rev=0,b;
    
    printf("Enter a number:");
    scanf("%d",&num);
    int ornum=num;
    while(ornum!=0)
    {
        b=ornum%10;
        if(b!=0)
            printf("%d",b);
        ornum/=10;
    }
    
    return 0;
}