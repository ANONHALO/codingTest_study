#include <iostream>
#include <string>

using namespace std;

int main(void){
	string input;
	int front,back,flag;
	cin>>input;
	while(input.compare("0")){
		flag=1;
		front=0;
		back=input.length()-1;

		while(front<=back){
			if(input[front]!=input[back]) {
				flag=0;
				break;
			}
		       	else{
				front++;
				back--;
			}
			

		}
		if(flag) cout<<"yes";
		else cout<<"no";
		cout<<'\n';
		cin>>input;

	}

	return 0;
}
