#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    double c,f;
    cout<<"Enter the temperature  : ";
    cin>>c;
    f  = (c*1.8)+32;
    cout<<"The temperature is "<< f <<"'F";
    getch();
return 0;
}