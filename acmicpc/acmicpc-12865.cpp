#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int n,k;
	cin>>n>>k;

	vector <int> w(n);
	vector <int> v(n);
	vector <int> dp(k+1,0);

	for(int i=0;i<n;i++) cin>>w[i]>>v[i];

	for(int i=0;i<n;i++){
		for(int j=k;j>=0;j--){
			if(j-w[i]>=0) dp[j]=max(dp[j-w[i]]+v[i],dp[j]);
		}
		
	}

	cout<<dp[k];

	return 0;
}
