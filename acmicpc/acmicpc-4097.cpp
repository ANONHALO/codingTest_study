#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int f_dp(vector <int> &dp){
	
	int result;
	result=dp[0];
	for(int i=1;i<dp.size();i++){
		dp[i]=max(dp[i]+dp[i-1],dp[i]);
		result=max(dp[i],result);
	}

	return result;
}


int main(void){
	int n;
	int input;
	vector <int> dp;

	cin>>n;
	while(n!=0){
		for(int i=0;i<n;i++) {
			cin>>input;
			dp.push_back(input);
		}
		dp.clear();
		cout<<f_dp(dp)<<'\n';
		cin>>n;
	}

	return 0;
}
