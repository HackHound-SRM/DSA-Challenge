/*Problem 4: Get rid of boring Maths?
Complete the function Squareroot(int N), which takes N as argument
and returns the square root of N.
Code:
#include <stdio.h>
double Squareroot(int N){
}
Hint: Can you recall the concept of binary search? high? low?
and mid??*/

#include <stdio.h>
double Squareroot(int N)
{
    int i,sq;
    
    for(i=1.0;sq<N;i++)
    {
        sq=i*i;
    }
    
    return i-1;
    if(N==0 || N==1)
        return N;
}

void main()
{
    clrscr();
    int N;
    printf("Enter value of N:");
    scanf("%d",&N);
    printf("%f is the Squareroot of %d",Squareroot(N),N);
}
