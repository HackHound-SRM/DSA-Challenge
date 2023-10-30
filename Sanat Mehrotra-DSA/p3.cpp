#include <bits/stdc++.h>
using namespace std;

void p3(int h, int m , string s) {
    int a;
  if( s == "am") {
     a = h*100 + m;
    if(h < 10) cout << "0" << a<<"hrs";
    else cout << a <<"hrs";
  }
  else {
     a = (12+h)*100 + m;
     cout << a<<"hrs";
  }
   
}


int main() {
    int h,m;
    cin >>h >>m;
    string s;
    cin >> s;
    p3(h,m,s);
}