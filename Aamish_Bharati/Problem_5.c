/*Problem 5: Kejri is back!
Due to an immense rise in Pollution, Kejriwal is back with the Odd and
Even Rule in Delhi. The scheme is as follows, each car will be allowed
to run on Sunday if the sum of digits which are even is divisible by 4
or sum of digits which are odd in that number is divisible by 3.
However to check every car for the above criteria can't be done by
the Delhi Police. You need to help Delhi Police by finding out if a car
numbered N will be allowed to run on Sunday?
Input Format:
The first line contains N , then N integers follow each denoting the
number of the car.
Output Format:
N lines each denoting "Yes" or "No" depending upon whether that car
will be allowed on Sunday or Not !*/

#include <stdio.h>
void main()
{
    int N,sum=0,a;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<N;j++)
    {
        int b=arr[j],k=5;
        while(k!=0)
        {
            a=b%10;
            sum+=a;
            b/=10;
            k--;
        }
        
        if(sum%3==0 || sum%4==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}