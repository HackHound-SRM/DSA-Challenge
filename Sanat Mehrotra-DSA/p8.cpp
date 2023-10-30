#include <bits/stdc++.h>
using namespace std;

void p8(int n , vector<string> s) {
   
   int a = -1, i=0;

  for(i= 0; i<n;i++) {
       if(s[i] == "yes") {
           a = i;
           break;
        }
   }
      if (a != -1) {
         cout <<a+1;
      }
      else {
         cout << "no yes found";
      }
}


int main() {
   int n;
   cin >>n;
   vector<string> s(n);
   for (int i = 0; i < n; i++)
   {
      cin >>s[i];
   }
   

   p8(n,s);
   return 0;
}
