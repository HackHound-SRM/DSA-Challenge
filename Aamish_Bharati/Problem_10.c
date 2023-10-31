/*
Problem 10: Arpit and numbers
Arpit isn't good at numbers but he loves inverting digits in them.
Inverting digit t means replacing it with digit 9 - t.
Help Arpit to transform the initial number x to the minimum possible
positive number by inverting some (possibly, zero) digits. The decimal
representation of the final number shouldn't start with a zero.
Sample Input: 4545
Sample Output: 4444
Explanation
There are many numbers formed after inverting the digit. For
minimum number, check if inverting digit is less than or greater than
the original digit. If it is less, then invert it otherwise leave it
*/
#include <stdio.h>
void main()
{
    int x,j=1;
    
    scanf("%d",&x);
    int orx=x,a,inv,sum=0;
    while(orx!=0)
    {
        a=orx%10;
        inv=9-a;
        if(inv>a)
            sum=sum+a*j;
        else if(inv<a)
            sum=sum+inv*j;
        j*=10;
        orx/=10;
    }
    printf("%d",sum);
}