#include <bits/stdc++.h>
using namespace std;

void p7(int n) {
    int a = 0,b=0;
     a = n%60;
     b = n/60;
     cout <<b<<":"<<a;
}


int main() {
   int n;
   cin >>n;
   p7(n);
}
