#include <iostream>
#include <string>
using namespace std;

int main (void){
	int ch[26];
	fill_n(ch,26,-1);
	string input;
	cin>>input;
	for(int i=0;i<input.size();i++){
		if(ch[input[i]-'a']>-1) continue;
		ch[input[i]-'a']=i;
	}

	for(int i=0;i<sizeof(ch)/sizeof(int);i++) cout<<ch[i]<<' ';

	return 0;
}
