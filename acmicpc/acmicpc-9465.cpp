#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(void){
	int t,n;
	int result;
	int tmp;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		vector <vector <int>> dp(2,vector<int>(n));
		for(int j=0;j<2;j++){
			for(int k=0;k<n;k++){
				cin>>dp[j][k];
			}
		}
	
		dp[0][1]+=dp[1][0];
		dp[1][1]+=dp[0][0];
	
		for(int j=2;j<n;j++){
			dp[0][j]=max(dp[1][j-1]+dp[0][j],dp[1][j-2]+dp[0][j]);
			dp[1][j]=max(dp[0][j-1]+dp[1][j],dp[0][j-2]+dp[1][j]);

		}

		result=max(dp[0].back(),dp[1].back());
		cout<<result<<'\n';

	}	
	
	return 0;
}
