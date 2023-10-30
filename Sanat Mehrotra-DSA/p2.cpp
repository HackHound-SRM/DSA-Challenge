#include <bits/stdc++.h>
using namespace std;

void p2(int n) {
     int k,r;
  
   while (n != 0) {
      r = n % 10;
      k = k*10 + r;
      n /= 10;
      
   }

   cout << k;
   
}


int main() {
    int n;
    cin>>n;
    p2(n);
}

