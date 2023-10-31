#include <stdio.h>

int main() {
    int n,rev=0,flag;
    printf("Enter the digit:");
    scanf("%d", &n);
    while(n!=0){
        flag=n%10;
        rev=(rev*10)+flag;
        n=n/10;
    }
    printf("Reversed digit is: %d",rev);
}