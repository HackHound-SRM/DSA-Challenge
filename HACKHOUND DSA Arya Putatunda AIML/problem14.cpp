/*Problem 14: N factorial using Recursion
For a given number N, calculate and return N factorial, use recursion.
N! = N*(N-1)*(N-2)...3*2*1
*/
#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;

    if(a<0){
        cout<<"Factorial does not exist";
    } 
    else{
        int fact = factorial(a);
        cout<<a<<"!= "<<fact<<endl;
    }
    return 0;
}