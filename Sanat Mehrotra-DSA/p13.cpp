#include <bits/stdc++.h>
using namespace std;

void p13(int n) {
    int a = 0,b=1;
    int c=0;
    if(n==2||n==1) cout <<1;
    else {
        for(int i = 3; i<=n; i++) {
        c = a+b;
        a=b;
        b=c;
    }
      cout << c <<endl;
    }
    
}


int main() {
   int n;
   cin >>n;
   p13(n);
}