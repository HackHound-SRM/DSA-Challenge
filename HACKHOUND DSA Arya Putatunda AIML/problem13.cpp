/* Problem 13: Nth Fibonacci
Take N as input. Print Nth Fibonacci Number, given that the first two
numbers in the Fibonacci Series are 0 and 1.
Sample Input: 10
Sample Output: 55
Challenge: Can you solve this without recursion?
*/

#include<iostream>
using namespace std;

int fibonacii(int num){
    if(num<=1){
        return num;
    }
    int temp = 0;
    int curr = 1;

    for(int i=2; i<=num;i++){
        int next = temp + curr;
        temp = curr;
        curr = next;
    }
    return curr;
}
int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    int nfib = fibonacii(x);
     cout << "The " << x << "th Fibonacci number is: " << nfib << endl;
    return 0;
}