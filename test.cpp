#include <iostream>
#include <stack>
#include <typeinfo>
using namespace std;

int main(void){
	string input;
	cin>>input;

	cout<<typeid(input[1]).name();

	return 0;
}

