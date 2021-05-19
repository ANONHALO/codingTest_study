#include <iostream>
#include <string>
using namespace std;

int main(void){

	int result[4]={0};



	for(int i=0;i<100;i++){
		string input;
		cin>>input;
			
		if(input.length()==0) break;

		for(int j=0;j<input.size();j++){
			if('a'<=input[j]&&'z'>=input[j]) result[0]++;
			else if('A'<=input[j]&&input[j]<='Z') result[1]++;
			else if('0'<=input[j]&&input[j]<='9') result[2]++;
			else result[3]++;	
		}

		for(int k=0;k<4;k++) cout<<result[i]<<' ';
		cout<<'\n';
		fill_n(result,4,0);
	}
	

	return 0;
}
