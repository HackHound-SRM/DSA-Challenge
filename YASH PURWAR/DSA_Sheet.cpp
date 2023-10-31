// Problem 1

#include<iostream>
using namespace std;

int main(){
    float C;
    cin>>C;
    cout<<(C*9/5)+32<<endl;
}


// Problem 2

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    int rev_num = 0;
    while(num>0){
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    
    cout<<"Reverse Number is "<<rev_num<<endl;
}


// Problem 3
#include <iostream>
#include <string>
using namespace std;

int main() {
    int hrs, min;
    string a;
    cout << "Enter hours: ";
    cin >> hrs;
    cout << "Enter minutes: ";
    cin >> min;
    cout << "Enter 'am' or 'pm': ";
    cin >> a;

    if (hrs <= 12 && min <= 59) {
        if ((a == "PM" || a == "pm") && (hrs > 0) && (hrs < 12)) {
            hrs = hrs + 12;
        }
        cout << "Output: "<<endl;
        cout<< hrs<< min<<endl;
    } else {
        cout << "Provide the correct inputs." << endl;
    }

    return 0;
}



// Problem 5
#include <iostream>
using namespace std;
int even(int num) {
    int s = 0;
    while (num != 0) {
        int d = num % 10;
        if (d % 2 == 0)
            s = s + d;
        num = num / 10;
    }
    return s;
}

int odd(int num) {
    int s = 0;
    while (num != 0) {
        int d = num % 10;
        if (d % 2 != 0)
            s = s + d;
        num = num / 10;
    }
    return s;
}

int main() {
    int t;
    cout << "Enter number of test cases: ";
    scin >> t;
    int temp = t;
    int num[t];
    int c = 0;
    while (t--) {
        cout << "Enter numbers: ";
        cin >> num[c];
        c++;
    }
    c = 0;
    while (temp--) {
        if (odd(num[c]) % 3 == 0 || even(num[c]) % 4 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        c++;
    }
    return 0;
}


// Problem 8
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    for (int i = 1; i <= t; i++) {
        string answer;
        cout << "Test case " << i << ": ";
        cin >> answer;

        if (answer == "yes") {
            cout << "Minimum level at which the phone will break: " << i << endl;
            break;
        }
    }

    return 0;
}



// Problem 11
#include <bits/stdc++.h>
using namespace std;
bool balanced(string expr)
{
	stack<char> temp;
	for (int i = 0; i < expr.length(); i++) {
		if (temp.empty()) {
			temp.push(expr[i]);
		}
		else if ((temp.top() == '(' && expr[i] == ')')
				|| (temp.top() == '{' && expr[i] == '}')
				|| (temp.top() == '[' && expr[i] == ']')) {
			temp.pop();
		}
		else {
			temp.push(expr[i]);
		}
	}
	if (temp.empty()) {
		return true;
	}
	return false;
}
int main()
{
	string expr = "()[]{{}";
	if (balanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}


// Problem 12
#include<iostream>
using namespace std;
int main()
{
    int c=0;
    for(int i=4;i>=0;i--)
    {
        for(int k=i;k>0;k--)
        cout<<" ";
        for(int j=0;j<=c;j++)
        cout<<"*";
        c++;
        cout<<endl;
    }
}


// Problem 13
#include <iostream>
using namespace std;
int fibo(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
	    return 0;
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
    int n;
	cout<<"Enter Position: "<<endl;
	cin>>n;
	cout<<fibo(n);
	return 0;
}



// Problem 14
#include<iostream>
using namespace std;
int fac(int n)
{
    if(n>=1)
    return (n)*fac(n-1);
    else
    return 1;
}
int main()
{
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"Factorial is "<<fac(n)<<endl;
}



// Problem 15
#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cout<<"Enter number of inputs : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array : "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    cout<<"Enter target : ";
    cin>>t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==t)
            cout<<i<<" "<<j;
        }
    }
}


// Problem 16
#include<iostream>
using namespace std;
int main()
{
    int t,n,c=0;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"Enter digit to be searched : "<<endl;
    cin>>t;
     int num=n;
    while(n!=0)
    {
        int d=n%10;
        if(d==t)
        c++;
        n=n/10;
    }
    cout<<"The digit "<<t<<"occurs "<<c<<"times in "<<num<<endl;
}


// Problem 17
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"[";
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        cout<<"FizzBuzz";
        else if(i%3==0)
        cout<<"Fizz";
        else if(i%5==0)
        cout<<"Buzz";
        else
        cout<<i;
        if(i<n)
        cout<<",";
    }
    cout<<"]";
}


// Problem 18
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of integers : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter array element: "<<i+1;
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"Largest integer in array is "<<max;
    
}


// Problem 19
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter number of integers: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter array element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    bool foundDuplicate = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " is repeated" << endl;
                foundDuplicate = true;
                break;
            }
        }
        if (foundDuplicate) {
            break;
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found." << endl;
    }

    return 0;
}


// Problem 20
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
