#include <iostream>
using namespace std;

int main(){
    int num,rev=0;
    cout<<"enter any number : ";
    cin>>num;
    while(num>0){
        int r = num % 10;
        rev = (rev*10)+r;
        num = num / 10;
    }
    cout <<"reversed number is "<<rev;
    return 0 ;
}