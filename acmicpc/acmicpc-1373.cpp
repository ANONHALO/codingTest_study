#include <iostream>
#include <string>

using namespace std;

int main(void){

	string input;
	long long mul=1;
	long long ten=1;
	long long result=0;
	cin>>input;
	for(int i=input.size()-1;i>=0;i--){
		result+=((input[i]-'0')*mul)*ten;
		if(mul==4){
			ten*=10;
			mul=1;
		}else{
			mul*=2;
		}
	}

	cout<<result;
	return 0;
}
