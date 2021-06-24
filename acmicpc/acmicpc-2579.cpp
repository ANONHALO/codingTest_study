#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	
	int n;
	cin>>n;
	vector <int> input(n);
	vector <int> dp(n);
	for(int i=0;i<n;i++) cin>>input[i];

	dp[0]=input[0];
	dp[1]=input[0]+input[1];
	dp[2]=max(dp[0]+input[2],input[1]+input[2]);

	for(int i=3;i<n;i++){
		dp[i]=input[i]+max(dp[i-2],dp[i-3]+input[i-1]);

	}

	cout<<dp[n-1];
	return 0;
}
