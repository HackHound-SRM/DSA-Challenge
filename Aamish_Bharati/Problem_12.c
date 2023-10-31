/*Problem 12: Pattern
Print the following pattern using loop:
            *
          * *
        * * *
      * * * *
    * * * * *   . */

#include <stdio.h>

int main()
{
    int n=5,m=n-1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" ");
        }
        
        for(int k=0;k<i+1;k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
    return 0;
}
