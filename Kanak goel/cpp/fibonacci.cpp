#include<iostream>
using namespace std;
int main(){
    int n,ft=0,st = 1,nt;
    cout<<"To find the nth value of fibonacci series"<<endl<<"Enter the value of N : ";
    cin>>n;
        for(int i =0;i<n;i++){
            nt = ft + st;
            ft = st;
            st = nt;
        }
        cout<<"Output : "<<ft;
}