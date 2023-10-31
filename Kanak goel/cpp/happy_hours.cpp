#include <iostream>
#include<conio.h>
using namespace std;

int main(){
int time,hour,min;
cout<<"Enter time in minutes : ";
cin>>time;
hour = time/60;
min = time%60;
cout<<"OUTPUT : "<<hour<<":"<<min;
getch();
return 0;
}