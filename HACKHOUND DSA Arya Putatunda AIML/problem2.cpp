/*
Problem 2: Reverse digits of a number
Given an integer N, reverse the digits of N. Remember that you need
to make changes to the same number.
Example 1:
Input: 32
Output: 23
Example 2:
Input: C = 7250
Output: 52
*/
#include<iostream>
using namespace std;

int main(){
    int a, rev = 0, rem;

    cout<<"Enter the number"<<endl;
    cin>>a;

    while(a != 0 ){ 
        rem = a % 10;
        rev = rev * 10 + rem;
        a /= 10;
     }
     cout<<"Reversed Number "<<rev;
    return 0;
}