/* problem 8: It's Tim to Cook

After the backlash at titanium body of iPhone 15, Tim has decided to
change the build material of iPhone 16. This new build material has to
go under drop testing.
In this test, phone will be dropped from any floor of an N-storey
building, and tested if it breaks or not.
Find the minimum number of tries in which you can tell: at which
minimum level does my phone break
Sample Input: N=13
[No, No, No, No, No, No, No, No, No, No, No, Yes, Yes]
Sample Output: 12
Explanation: Since, all the elements till 11th index of array are No,
And the first time we get a Yes is at 12th place.

*/

#include<iostream>
#include<vector>

using namespace std;

int droplvl(vector<bool> &dropRes){
    int left = 0;
    int right = dropRes.size() - 1;
    int res = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (dropRes[mid] == false){
            
            res = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return res;
    
}
int main(){
    int num = 13;
    vector<bool> dropRes = {false, false, false, false, false, false, false, false, false, false, false, false, true, true};

    int mindroplvl = droplvl(dropRes);

    if (mindroplvl == -1){
        cout<< "Phone doesnt break..."<<endl;
    } else {
        cout << " Minimum level at which the phone breaks is : "<<mindroplvl + 1 <<endl;
    }
    return 0;
}

