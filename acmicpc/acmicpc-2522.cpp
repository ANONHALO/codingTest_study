#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
	int n;
	cin>>n;

	for(int i=1;i<=2*n-1;i++){
		for(int j=0;j<n-abs(n-i);j++){
			cout<<'*';
		}
		cout<<'\n';
	}
	return 0;
}
