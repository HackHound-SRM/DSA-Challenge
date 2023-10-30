#include<iostream>
using namespace std;
int revert(int n){
    int rev =9-n;
    if(rev<n)
    return rev;
    else
    return n;
}

int main(){
    int num,revers=0,d=0,n,cn = 1;
    cout<<"enter any integer : ";
    cin>>num;
    n = num; 
    while(n>0){
    d = n%10;
    revers = revers+revert(d)*cn;
    cn*=10;
    n=n/10;
    }
    cout<<revers;
    return 0;
}