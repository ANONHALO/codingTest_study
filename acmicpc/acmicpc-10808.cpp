#include <iostream>
#include <string>
using namespace std;
int main(void){
	int result[26];
	string input;
	fill_n(result,26,0);
	cin>>input;
	for(int i=0;i<input.size();i++){
		result[input[i]-'a']++;
	}

	for(int i=0;i<26;i++){
		cout<<result[i]<<' ';
	}

	return 0;
}
