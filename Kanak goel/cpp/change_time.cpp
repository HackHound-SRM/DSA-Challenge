#include <iostream>
#include<string>
using namespace std;

int main(){
    int hour,min;
    string shift;
    cout<<"Enter the 12 hour time to change in 24 hour format\n";
    cout<<"Enter the hours and min: ";
    cin>>hour>>min;
    if(hour<=12 && min<=60 && hour>=0 && min>=0){
    cout<<"Enter the shift AM or PM : ";
    cin>>shift;
    cout<<"INPUT : "<<hour<<":"<<min<<" "<<shift<<endl;
    (shift=="PM"||shift =="pm") ? hour = hour+12:hour;
    cout<<"OUTPUT : "<<hour<<min;
    }
    else {
    cout<<"Enter the correct values!\n\n";
    main();
    }
    return 0;
}