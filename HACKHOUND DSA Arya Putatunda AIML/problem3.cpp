/*Problem 3: Change time format
Given a time T in 12hr clock format [HH:MM AM/PM], change it to 24hr
clock format [HHMM hrs]. You can choose input type as per your
convenience.
Example 1:
Input: T = 11:30 PM
Output: 1230 hrs
Explanation:
Since, 11:30 + 12 = 23:30, 11:30 PM is denoted by 2330 hrs in 24hr
clock format
Example 2:
Input: T = 9:00 PM
Output: 0900 hrs*/

#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string inputTime;
    cout << "Enter time in 12-hour clock format [HH:MM AM/PM]: ";
    cin >> inputTime;

    int hours, minutes;
    char ampm[3];
    
    // Parse the input time
    sscanf(inputTime.c_str(), "%d:%d %2s", &hours, &minutes, ampm);

    if (strcmp(ampm, "PM") == 0 && hours != 12) {
        // If it's PM and not 12 PM, add 12 to the hours
        hours += 12;
    } else if (strcmp(ampm, "AM") == 0 && hours == 12) {
        // If it's 12 AM, set hours to 0
        hours = 0;
    }

    // Print the time in 24-hour clock format
    printf("%02d%02d hrs\n", hours, minutes);

    return 0;
}