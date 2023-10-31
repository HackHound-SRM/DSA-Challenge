#include<iostream>
using namespace std;
int count(int num,int k){
int r,count =0;
while(num>0){
    r = num%10;
    if(r==k){
        count++;
    }
    num /= 10; 
}
return count;
}
int main(){
    int num,k;
    cout<<"enter any large number : ";
    cin>>num;
    cout<<"enter any digit to search : ";
    cin>>k;
    cout<<"NUMBER OF TIMES "<<k<<" occurs in "<<num<<" is "<<count(num,k);
    return 0;
}