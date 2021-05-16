#include <iostream>
using namespace std;

int main(void){
	int input;
	int max=0,idx;
	
	for(int i=0;i<9;i++){
		cin>>input;
		if(max<input){
			idx=i;
			max=input;
		}
	}

	cout<<max<<'\n'<<idx+1;
	return 0; 
} //test
