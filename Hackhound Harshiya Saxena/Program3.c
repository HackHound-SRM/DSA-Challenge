#include<stdio.h>
#include<string.h>
int main()
{
    int hrs, min;
    char a[3];
    printf("Enter hours : ");
    scanf("%d", &hrs);
    printf("Enter minutes : ");
    scanf("%d", &min);
    printf("Enter 'am' or 'pm : ");
    scanf("%s", &a);
    if(hrs <= 12 && min <= 59)      
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
           && (hrs> 0) && (hrs<12))
        {
            hrs= hrs+ 12;
        }
        printf("Output :");
        printf("%02d:%02d", hrs, min);
    }
    else
    {
        printf("Provide the correct inputs.");
    }
    return 0;
}