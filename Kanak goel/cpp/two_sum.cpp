#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter number of elements in the array : ";
    cin>>n;
    int a[n];
    while (i<n)
    {
        cout<<"Enter an integer : ";
        cin>>a[i];
        i++;
    }
  int t,found=0;
  cout<<"enter target value : ";
  cin>>t;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]+a[j]==t){
        cout<<'['<<i<<','<<j<<']'<<endl;
        found=1;
      }
    }
  }
  if(!found){
    cout<<"No pairs found"<<endl;
  }
  return 0;
}