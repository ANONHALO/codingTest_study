#include <iostream>
#include <limits.h>
using namespace std;

int main(void){

	int min=INT_MAX,max=INT_MIN;
	int n,input;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>input;
		if(min>input) min=input;
		if(max<input) max=input;	
	}

	cout<<min<<' '<<max;


	return 0;
}
