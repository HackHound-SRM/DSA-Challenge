/* Problem 13: Nth Fibonacci
Take N as input. Print Nth Fibonacci Number, given that the first two
numbers in the Fibonacci Series are 0 and 1.
Sample Input: 10
Sample Output: 55
Challenge: Can you solve this without recursion?
*/

#include <stdio.h>

int main()
{
    int N,a=0,b=1,sum=0;
    
    scanf("%d",&N);
    
    for(int i=1;i<N;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    
    printf("%d",sum);
    return 0;
}