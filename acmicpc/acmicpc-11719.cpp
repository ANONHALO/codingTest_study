#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s;
	
	while (1){
		if(cin.eof()) break;
		getline(cin,s);
		cout<<s<<'\n';
	}
	
	return 0;
}
