#include<stdio.h>
int main() {
    int num, rev=0, a;
    printf("Enter any number:\n>>>");
    scanf("%d", &num);
    while(num!=0){
        a=num%10;
        rev=(rev*10)+a;
        num=num/10;
    }
    printf("Reversed number:\\n>>>%d", rev);
    return 0;
}