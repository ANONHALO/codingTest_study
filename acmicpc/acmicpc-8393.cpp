#include <iostream>
using namespace std;

int recursive_sum(int n){
	if(n==1) return 1;

	return n+recursive_sum(n-1);
}

int main(void){
	int n;
	cin>>n;
	cout<<recursive_sum(n);
	
	return 0;
}
