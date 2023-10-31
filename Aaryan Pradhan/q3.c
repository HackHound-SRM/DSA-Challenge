#include<stdio.h>
int main()
{
    int hour,minute;
    char t[2];
    printf("Enter time in 12hr clock format HH:MM AM/PM: ");
    scanf("%d:%d %c%c",&hour,&minute,&t[0],&t[1]);
    
    if(t[0] == 'p' || t[0] == 'P')
    {
        hour = hour + 12;    
    }
    if(minute == 0 && hour < 10)
        printf("0%d%d0",hour,minute);
    else if(minute == 0)
        printf("%d%d0",hour,minute);
    else if(hour < 10)
        printf("0%d%d",hour,minute);
    
    else
        printf("%d%d",hour,minute);
    return 0;
}