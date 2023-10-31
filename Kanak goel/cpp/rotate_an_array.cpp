#include<iostream>
using namespace std;


int main(){
    int n,i=0,d;
    cout<<"enter number of elements in the array : ";
    cin>>n;
    int arr[n];
    while (i<n)
    {
        cout<<"Enter an integer : ";
        cin>>arr[i];
        i++;
    }
    cout<<"Enter the number of steps to rotate : ";
    cin>>d;
    int b[d];
    for(int i =0;i<n;i++){
        if (i<d){
        b[i] = arr[i];
        } 
        else{
         arr[i-d] = arr[i];
        }
    }
    for(int i=0;i<d;i++){
        arr[n-i-1] = b[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}