#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int main(void){

	int n;
	cin>>n;
	int result;
	vector <vector<int>> input(n,vector <int> (3,0));
	vector <vector<int>> dp(n,vector<int>(3,INT_MAX));
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>input[i][j];
		}
	}

	dp[0][0]=input[0][0];
	dp[0][1]=input[0][1];
	dp[0][2]=input[0][2];
	for(int i=1;i<n;i++){
		for(int j=0;j<3;j++){
				dp[i][j]=min(dp[i][j],input[i][j]+dp[i-1][(j+1)%3]);
				dp[i][j]=min(dp[i][j],input[i][j]+dp[i-1][(j+2)%3]);
		}

	}
	
	result=dp[n-1][0];

	for(int i=1;i<3;i++) result=min(result,dp[n-1][i]);

	cout<<result;



	return 0;

}
