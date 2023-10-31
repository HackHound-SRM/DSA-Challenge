/*
Problem 1: Celsius to Fahrenheit
Given a temperature in Celsius C. You have to convert it in Fahrenheit.
Example 1:
Input: C = 32
Output: 89.60
Explanation:
For 32 degree C temperature, Fahrenheit = (C*9/5)+32
Hence, in Fahrenheit = 89.60
Example 2:
Input: C = 25
Output: 77.00
Explanation:
For 25 degree C temperature, in Fahrenheit = 77.00
*/
#include<iostream>
using namespace std;

int main(){
    float temp;
    float F;
    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>temp;
    F = (temp * 9/5) + 32;
    cout<<"Temperature in Fareheit is : " << F<<endl;
    return 0;
}