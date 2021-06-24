#include <iostream>
using namespace std;

int dp[10001]={0,1,2,3};

int f_dp(int n){
	if(n<=3) return dp[n];
	int tmp=n/2;
	int tmp2;
	for(int i=tmp;i>=0;i--){
		tmp2=n-2*i;
		if(tmp2%3==0) dp[n]++;
	}
	dp[n]+=f_dp(n-1);
	return dp[n];

}

int main(void) {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cout<<f_dp(n)<<'\n';
	}
	return 0;
}
