#include<stdio.h>
int main() {
    int cars;
    int arr[20];
    int num, a, sum, num2, suta[20];
    num2=num;
    printf("Enter the number of cars:\n>>>");
    scanf("%d", &cars);
    for(int i=1; i<=cars; i++) {
        printf("Enter the %dth car number:\n>>>", i);
        scanf("%d", &arr[i-1]);
    }
    for(int i=0; i<cars; i++) {
    while (arr[i]>0)
    {
        a=arr[i]%10;
        sum=sum+a;
    }   
        arr[i]=arr[i]/10;
        if(arr[i]=0){
            suta[i]=sum;
            printf("%d", suta[i]);
        }
    }
    // if(num%2==0){
    //     if (sum%4==0)
    //     {
    //         printf("Car is allowed to run.");
    //     } else{
    //         printf("Car is not allowed to run,");
    //     }
    // } else {
    //     if(sum%3==0){
    //         printf("Car is allowed to run.");
    //     } else {
    //         printf("Car is not allowed to run.");
    //     }
    // }
    
    return 0;
}