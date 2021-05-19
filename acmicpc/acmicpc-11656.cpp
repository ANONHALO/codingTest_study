#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(void){
	string input;
	vector <string> result;
	cin>>input;
	for(int i=0;i<input.length();i++){
		result.push_back(input.substr(i));
	}

	sort(result.begin(),result.end());

	for(int i=0;i<result.size();i++){
		cout<<result[i]<<'\n';
	}
	return 0;
}
