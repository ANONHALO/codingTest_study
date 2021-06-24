#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string input1,input2;
	cin>>input1>>input2;
	int result;
	vector <vector<int>>dp(input1.length()+1, vector <int> (input2.length()+1,0));
	int i,j;
	for(i=0;i<input1.length();i++){
		for(j=0;j<input2.length();j++){
			if(input1[i]!=input2[j]) dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			else dp[i+1][j+1]=dp[i][j]+1;
		}
	}

	result=dp[i][0];
	for(int k=1;k<=input2.length();k++) result=max(result,dp[i][k]);

	cout<<result;

	return 0;
}
