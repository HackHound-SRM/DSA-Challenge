#include<iostream>
#include<string>
using namespace std;

int main(){
int n,i=0,r;
cout<<"Enter the number of test floors : ";
cin>>n;
string arr[n];
bool state=false;
while(n){
    cout<<"Enter the result : ";
    cin>>arr[i];
    n--;
    if(arr[i]=="yes" && !state){
        r = i+1;
        state = !state;
    }
    i++;
    }
cout<<"Output : "<<r<<" Floor";
}