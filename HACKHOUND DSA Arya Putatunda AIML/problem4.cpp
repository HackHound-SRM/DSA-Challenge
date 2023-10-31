/*Problem 4: Get rid of boring Maths?
Complete the function Squareroot(int N), which takes N as argument
and returns the square root of N.
Code:
#include <stdio.h>
double Squareroot(int N){
}
Hint: Can you recall the concept of binary search? high? low?
and mid??*/

#include<iostream>
using namespace std;

double Squareroot(int N){
    if (N==0 || N == 1){
        return N;
    }

    double low = 0.0;
    double high = (double)N;
    double epislon = 1e-6;

    while(high>low){
        double mid = (low + high) / 2.0;
        double square = mid * mid;

        if (square < N){
            low = mid;
        } else {
            high = mid;
        }
    }
    return (low + high) / 2.0;
}
int main(){
    int N;
    cout<<"Enter an integer"<<endl;
    cin>>N;

    double result = Squareroot(N);
    cout<<"Square root of "<<N<<"is approx:"<<result<<endl;

    return 0;
}