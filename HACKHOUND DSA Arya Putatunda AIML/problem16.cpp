/*Problem 16: Count Digits
Given a number N and a digit K, Write a function that returns the
number of times K is found in N. Print the value returned.
Sample Input: 5433231
Sample Output: 3
Explanation:
The digit can be from 0 to 9. Assume decimal numbers. In the given
case digit 3 is occurring 3 times in the given number.*/

#include<iostream>
using namespace std;

int occurances(int n, int j){
    int cnt = 0;

    while(n>0){
        int digit = n % 10;

        if(digit == j){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
int main(){
    int n, k;
    cout<<"Enter a number n: ";
    cin >> n;
    cout<<"Enter a digit k: ";
    cin>>k;

    int occs = occurances(n ,k);
    cout << "The digit " << k << " occurs " << occs << " times in " << n << endl;
    return 0;
}