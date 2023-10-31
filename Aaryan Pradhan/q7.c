#include<stdio.h>
int main()
{
    int input;
    printf("Enter time in minutes: ");
    scanf("%d",&input);
    int hours = input/60;
    int mins = input%60;

    if(hours<10 && mins<10)
        printf("0%d:0%d",hours,mins);
    else if(hours<10)
        printf("0%d:%d",hours);
    else if(mins<10)
        printf("%d:0%d",mins);
    else
        printf("%d:%d",hours,mins);

    return 0;
}