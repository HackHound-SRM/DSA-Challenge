#include<iostream>
using namespace std;

string* fizzbuz(int n){
string s;
string* answer = new string[n]; 
    for(int i=1;i<=n;i++){
    if(i%3==0 && i%5==0)   s ="FizzBuzz";
    else if(i%3==0) s =  "Fizz";
    else if(i%5==0) s =  "Buzz";
    else s= to_string(i);
    answer[i-1]=s;
    }
    return answer;

}
int main(){
    int n;
    cout<<"enter any number : ";
    cin>>n;
    string* s;
    s = fizzbuz(n);
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<"\""<<s[i]<<"\"";
        if(i<n-1) cout<<",";
    }
    cout<<"]";
    return 0 ;
}