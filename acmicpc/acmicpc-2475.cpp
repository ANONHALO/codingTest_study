#include <iostream>
#include <vector>
using namespace std;

int main(void){
	
	int n=0;
	int tmp=0;

	for(int i=0;i<5;i++){
		cin>>tmp;
		n+=(tmp*tmp);
	}
	n%=10;
	cout<<n;
	return 0;
}
