#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int main(void){

	int n;
	cin>>n;
	vector <int> dp(n+1,-1);

	dp[1]=1;
	for(int i=2;i<=n;i++){
		int j=1;
		while(i*i*j<n+1){
			dp[i*i*j]=j;
			j++;
		}

	}

	for(int i=2;i<=n;i++){
		if(dp[i]==-1) dp[i]=dp[i-1]+1;
	}

	cout<<dp[n];
	return 0;
}
