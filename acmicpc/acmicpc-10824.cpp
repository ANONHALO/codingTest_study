#include <iostream>
#include <string>

using namespace std;

int toint(string a, string b){
	int ret=stoi(b);	
	ret+=(stoi(a)*b.length());
	return ret;
}
	

	

int main(void){
	string a,b,c,d;
	int result;

	cin>>a>>b>>c>>d;
	
	result=toint(a,b);
	result+=toint(c,d);

	cout<<result;

	return 0;
}
