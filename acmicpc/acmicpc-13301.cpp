#include <iostream>
#include <vector>

using namespace std;

int main(void){

	int n;
	cin>>n;
	vector <long long> input(n+1);
	input[0]=0;
	input[1]=1;
	if(n>=2) input[1]=1;

	for(int i=2;i<=n;i++){
		input[i]=input[i-1]+input[i-2];
	
	}

	cout<<(input[n-1]+2*input[n])*2;


	return 0;
}
