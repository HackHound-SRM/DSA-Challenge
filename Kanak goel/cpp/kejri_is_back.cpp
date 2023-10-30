#include <iostream>
using namespace std;

bool valid(int num)
{
    int a = 0, n, sum;
    while (num > 0)
    {
        n = num % 10;
        sum += n;
        num = num / 10;
    }
    bool v = (sum % 2 == 0) ? (sum % 4 == 0) : (sum % 3 == 0);
    return v;
}

int main()
{
    int n, num, i = 0;
    cout << "Enter the number of test cars : ";
    cin >> n;
    int arr[n];
    while (i < n)
    {
        cout << "Enter the car number : ";
        cin >> num;
        arr[i] = num;
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (valid(arr[i]))
            cout << "Yes\n";
        else
        {
            cout << "No\n";
        }
        i++;
    }
    return 0;
}