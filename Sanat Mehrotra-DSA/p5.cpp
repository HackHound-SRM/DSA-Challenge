#include <bits/stdc++.h>
using namespace std;

void p5(int n) {
    int r,a=0,b=0;
  while(n!=0) {
    r=n%10;
     if(r%2 ==0) {
        a += r;
     }
     else {
        b += r;
     }
   n /=10;
  }
  
   if(a%4 == 0 || b%3 == 0){
    cout << "yes"<< endl;
   }
   else {
    cout << "no"<< endl;
   }
    
}


int main() {
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >>n;
        p5(n);
    }
}