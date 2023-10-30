#include <bits/stdc++.h>
using namespace std;

void p18(vector<int> v) {
    sort(v.begin(), v.end());
    cout << v.back();
}


int main() {
    int n;
   vector<int> v(n);
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);                                                                
    }
   p18(v);
   return 0;
}