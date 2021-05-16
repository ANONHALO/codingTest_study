#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--) cout<<' ';
		for(int k=0;k<i;k++) {
			cout<<"*";
			if(k!=i-1) cout<<' ';
		}
		cout<<'\n';
	}
	return 0;
}// this is for the test
