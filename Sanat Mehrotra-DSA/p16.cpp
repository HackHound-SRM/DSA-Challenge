#include <bits/stdc++.h>
using namespace std;

void p16(int n, int k) {
    int count =0;
    while(n!=0) {
        int r = n%10;
        if(r==k) count++;
        n=n/10;
    }
    cout<<count<<endl;
}


int main() {
   int n,k;
   cin >>n>>k; 
   int a[n];
   for(int i =0; i<n; i++) {
    cin>>a[i];
   }
   p16(n,k);
   return 0;
}