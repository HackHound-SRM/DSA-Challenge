/*Problem 14: N factorial using Recursion
For a given number N, calculate and return N factorial, use recursion.
N! = N*(N-1)*(N-2)...3*2*1
*/
#include <stdio.h>

int fac(int N)
{
    if(N==0 || N==1)
        return 1;
    else 
        return N*fac(N-1);
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",fac(N));
    return 0;
}