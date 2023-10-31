/*
Problem 7: Happy Hours
Tanay always tells time in minutes, but the students find it difficult to
comprehend. Design a function that converts [minutes] into [hours
and minutes] which makes time reading more comprehensive.
Input Format: Time in minutes
Output Format: Time in hours and minutes
Example 1:
Input: 490
Output: 06:1
*/

#include <stdio.h>
void main()
{
    int min;
    
    scanf("%d",&min);
    printf("%d:%d",min/60,min%60);
    
}