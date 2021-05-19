#include <iostream>
#include <string>

using namespace std;

int main(void){
	string input;

	getline(cin,input);

	for(int i=0;i<input.length();i++){
		if('a'<=input[i]&&input[i]<='z'){
			input[i]=((input[i]-'a')+13)%26+'a';
		}
		else if('A'<=input[i]&&input[i]<='Z'){
			input[i]=((input[i]-'A')+13)%26+'A';
		}
	}

	

	cout<<input;

	return 0;
}
