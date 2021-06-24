#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	
	int n;
	cin>>n;
	int result=0;
	vector <int> input(n);
	vector <vector <int>> dp(n);
	for(int i=0;i<n;i++){
		cin>>input[i];
	}

	for(i=3;i<input.size();i++){
		for(;j<k;j





	}
	for(int i=0;i<dp.size();i++){
		result=max(result,dp[i]);
	}

	cout<<result;	

	return 0;
}
