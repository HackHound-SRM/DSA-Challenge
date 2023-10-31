/*
Problem 9: Rotate the Array
Given an array 'arr' with 'n' elements, the task is to rotate the array to
the left by 'k' steps, where 'k' is non-negative.
Sample Input: arr[] = [1, 2, 3, 4, 5, 6], d = 2.
Sample Output: arr[] = {3, 4, 5, 6, 1, 2}
Explanation:
First Step:arr[] = {2, 3, 4, 5, 6, 1}
Second Step:arr[] = {3, 4, 5, 6, 1, 2}
Rotation is done 2 times, array becomes arr[] = {3, 4, 5, 6, 1, 2}
*/
#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void leftRotateArray(vector<int>& arr, int d) {
    int n = arr.size();

    d = d % n;


    reverseArray(arr, 0, d - 1);


    reverseArray(arr, d, n - 1);


    reverseArray(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2;

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    leftRotateArray(arr, d);

    cout << "\nRotated Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}






