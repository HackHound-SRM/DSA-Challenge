/*
Problem 10: Arpit and numbers
Arpit isn't good at numbers but he loves inverting digits in them.
Inverting digit t means replacing it with digit 9 - t.
Help Arpit to transform the initial number x to the minimum possible
positive number by inverting some (possibly, zero) digits. The decimal
representation of the final number shouldn't start with a zero.
Sample Input: 4545
Sample Output: 4444
Explanation
There are many numbers formed after inverting the digit. For
minimum number, check if inverting digit is less than or greater than
the original digit. If it is less, then invert it otherwise leave it
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s ;
    int n = s.length();

    for(int i = 0; i < n; i++){
        int digits = s[i] - '0';

        int invertednum = 9 - digits;
        if (invertednum < digits){
            s[i] = char('0' + invertednum);

        }
    }
    int start = 0;
    while(start < n && s[start] == '0'){
        start++;
    }

    cout<<s.substr(start)<<endl;
    return 0;
}