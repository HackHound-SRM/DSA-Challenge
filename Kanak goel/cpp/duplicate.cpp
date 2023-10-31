#include<iostream>
using namespace std;
int duplicate(int* arr,int l){
    int found =0;
    for(int i=0;i<l-1;i++){
        for(int j=i+1;j<l;j++){
            if(arr[i]==arr[j]) return arr[i];
            found=1;
        }
    }
    if(!found){
        return 0;
    }
}

int main(){
    int i=0;
    int n = 5;
    int nums[5]={1,3,4,2,2};
    int l = sizeof(nums)/sizeof(int);
    int d = duplicate(nums,l);
    if(d){
        cout<<d;
    }
    else{
        cout<<"none is repeated";
    }

}