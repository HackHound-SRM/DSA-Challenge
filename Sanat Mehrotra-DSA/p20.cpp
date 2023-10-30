#include <bits/stdc++.h>
using namespace std;

void p20(int n,int a[]) {
    bool sorted;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i =0; i<n-1; i++) {
        sorted=false;
        for(int j=0; j<n-i-1; j++) {
            if(a[j]<a[j+1]) {    // we have to just change greater than/less than sign for getting sorting in ascending/decending order.
                swap(a[j], a[j+1]);
                sorted = true;
            }
        }

        if(sorted == false) break;
        
    }
}

void print(int a[],int n) {
    for(int i=0; i<n; i++) {
        cout <<a[i]<<" ";
    }
   
}   

int main() { 
    int n;
    cin>>n;
    int a[n];
   for(int i=0; i<n; i++){
    cin>>a[i];
   }   
   p20(n ,a);
   print(a,n);
   return 0;
}