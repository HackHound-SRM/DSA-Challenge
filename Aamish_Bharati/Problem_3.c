/*Problem 3: Change time format
Given a time T in 12hr clock format [HH:MM AM/PM], change it to 24hr
clock format [HHMM hrs]. You can choose input type as per your
convenience.
Example 1:
Input: T = 11:30 PM
Output: 1230 hrs
Explanation:
Since, 11:30 + 12 = 23:30, 11:30 PM is denoted by 2330 hrs in 24hr
clock format
Example 2:
Input: T = 9:00 PM
Output: 0900 hrs*/

#include <stdio.h>
int main()
{
    char ti[9];
    int i=0,j=10,sum=0;
    printf("Enter time in [HH:MM AM/PM]:");
    fgets(ti,9,stdin);
    
    if(ti[6]=='A' && ti[7]=='M')
    {
        printf("%c%c%c%c hrs.",ti[0],ti[1],ti[3],ti[4]);
    }
    else if (ti[6]=='P' && ti[7]=='M')
    {
        printf("%c%c%c%c hrs.",ti[0]+1,ti[1]+2,ti[3],ti[4]);
    }
    return 0;
}