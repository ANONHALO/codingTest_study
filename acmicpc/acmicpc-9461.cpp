#include <iostream>
#include <vector>

using namespace std;
int main(void){

	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		vector <long long> dp(n+1);
		dp[1]=1;
		if(n>=2) dp[2]=1;
		if(n>=3) dp[3]=1;
		for(int j=4;j<=n;j++){
			dp[j]=dp[j-3]+dp[j-2];
		}

		cout<<dp[n]<<'\n';
	}


	return 0;
}
