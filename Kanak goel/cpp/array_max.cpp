#include<iostream>
using namespace std;

int max(int* num,int l){
    int max = num[0];
    for(int i=1;i<=l;i++){
        if(num[i]>max) max=num[i];
        else continue;
    }
    return max;
}
int main(){
    int n,i=0;
    cout<<"enter number of elements in the array : ";
    cin>>n;
    int nums[n];
    while (i<n)
    {
        cout<<"Enter an integer : ";
        cin>>nums[i];
        i++;
    }
    int  l = sizeof(nums)/sizeof(int);
    cout<<"Maximum integer in the array is "<<max(nums,l);
    return 0;
}