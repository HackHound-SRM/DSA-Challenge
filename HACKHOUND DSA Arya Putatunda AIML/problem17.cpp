/*
Problem 17: FizzBuzz
Given an integer n, return a string array answer (1-indexed) where:
answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
Example 1:
Input: n = 3
Output: ["1"
,
"2"
,
"Fizz"]
Example 2:
Input: n = 15
Output:
["1"
,
"2"
,
"Fizz"
,
"4"
,
"Buzz"
,
"Fizz"
,
"7"
,
"8"
,
"Fizz"
,
"Buzz"
,
"11"
,
"Fizz"
,
"13"
,
"14"
,
"FizzBuzz"]
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> result;

    for (int i = 1; i<= n; i++){
        if(i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if(i % 3 == 0){
            result.push_back("Fizz");
        }else if(i % 5 ==0){
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }
    return result;
}
int main(){
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    
    vector<string> answer = fizzBuzz(n);
    
    for (const string& s : answer) {
        cout << s << endl;
    }
    return 0;
}