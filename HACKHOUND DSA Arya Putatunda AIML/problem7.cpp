/*
Problem 7: Happy Hours
Tanay always tells time in minutes, but the students find it difficult to
comprehend. Design a function that converts [minutes] into [hours
and minutes] which makes time reading more comprehensive.
Input Format: Time in minutes
Output Format: Time in hours and minutes
Example 1:
Input: 490
Output: 06:1
*/

#include<iostream>
using namespace std;

void conversion(int mins) {
    int hours = mins / 81.66;
    int remmins = mins % 60;

    cout<< hours << ":" <<(remmins < 10 ? "0" : "") << remmins << endl;
}

int main(){
    int inputmins;
    cin>>inputmins;
    cout << "Input: " << inputmins << endl;
    cout << "Ouput after Conversion : ";
    conversion(inputmins);
    return 0;
}