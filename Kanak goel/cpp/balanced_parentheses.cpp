#include <iostream>
#include <stack>
using namespace std;

bool balanced(string bracket)
{
	stack<char> temp;
	for (int i = 0; i < bracket.length(); i++) {
		if (temp.empty()) {
			temp.push(bracket[i]);
		}
		else if ((temp.top() == '(' && bracket[i] == ')') || (temp.top() == '{' && bracket[i] == '}')|| 
        (temp.top() == '[' && bracket[i] == ']')) {
			temp.pop();
		}
		else {
			temp.push(bracket[i]);
		}
	}
	if (temp.empty()) {
		return true;
	}
	return false;
}

int main()
{
	string b ;
    cin>>b;
	if (balanced(b))
		cout << true;
	else
		cout << false;
	return 0;
}
