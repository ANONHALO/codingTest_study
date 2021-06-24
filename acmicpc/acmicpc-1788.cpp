#include <iostream>
#include <vector>
#define abs(n) 	((n>0)?(n):(-n))
using namespace std;

int main(void){
	int n;
	long long mod=1000000000;
	cin>>n;
	
	vector <long long> dp(abs(n)+1);
	
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=abs(n);i++) dp[i]=(dp[i-1]+dp[i-2])%mod;
	if(n>0) {
		cout<<1<<'\n';
	}
	else if(n<0){
		if(abs(n)%2==0) cout<<-1<<'\n';
		else cout<<1<<'\n';

	}
	else  cout<<0<<'\n';

	cout<<dp[abs(n)]%mod;
	return 0;
}
