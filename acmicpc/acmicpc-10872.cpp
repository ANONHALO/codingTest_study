#include <iostream>

using namespace std;

int recursive_fac(int n){
	if(n==1||n==0) return 1;

	return n*recursive_fac(n-1);
}

int main(void){
	int n;
	cin>>n;
	cout<<recursive_fac(n);

	return 0;
}
