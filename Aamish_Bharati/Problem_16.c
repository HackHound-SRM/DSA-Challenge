/*Problem 16: Count Digits
Given a number N and a digit K, Write a function that returns the
number of times K is found in N. Print the value returned.
Sample Input: 5433231
Sample Output: 3
Explanation:
The digit can be from 0 to 9. Assume decimal numbers. In the given
case digit 3 is occurring 3 times in the given number.*/

#include <stdio.h>
void main()
{
    int N,K,sum=0,a;
    
    printf("N=");
    scanf("%d",&N);
    printf("K=");
    scanf("%d",&K);
    
    while(N!=0)
    {
        a=N%10;
        if( a == K)
            sum++;
        N/=10;
    }
    
    printf("%d",sum);
}