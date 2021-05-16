#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse_string(string &input) {
	string result = "";
	stack <char> rstack;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] != ' ') rstack.push(input[i]);
			else {
				while (!rstack.empty()) {
					result += rstack.top();
					rstack.pop();
																			}
				result += ' ';
			}

	}
	while (!rstack.empty()) {
			result += rstack.top();
			rstack.pop();
	}
	return result;
}
int main(void) {
	int t;
	string input;
	cin >> t;
	cin.ignore(1, '\n');
	for (int i = 0; i < t; i++) {
		getline(cin,input);
		cout<<reverse_string(input) << '\n';
	}
	return 0;
}

