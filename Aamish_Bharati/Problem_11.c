/*Problem 11: Balanced Parentheses
Given a string s containing just the characters '(',')','{','}','[' and ']',
determine if the input
string is valid. An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same
type.*/

#include <stdio.h>
void main()
{
    char s[7];
    fgets(s,7,stdin);
    int flag;
    for(int i=0;i<6;i+=2)
    {
        int j=i+1;
        if(s[i]=='(' && s[j]==')')
        {  
            flag=0;
            continue;
        }
        else if(s[i]=='{' && s[j]=='}')
        {   
            flag=0;
            continue;
        }
        else if(s[i]=='[' && s[j]==']')
        {   
            flag=0;
            continue;
        }
        else
        {
            flag=1;
        }
    }
    if (flag==0)
        printf("true");
    else if(flag==1)
        printf("false");
}