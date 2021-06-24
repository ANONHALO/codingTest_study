#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	int n;
	long long tmp;
	cin >> n;
	vector <long long> input(n);
	vector <long long> dp(n);

	for(int i=0;i<n;i++){
		cin>>input[i];
	}

	dp[0]=input[0];
	tmp=input[0];
	for(int i=1;i<n;i++){
		dp[i]=max(input[i],dp[i-1]+input[i]);
		tmp=max(tmp,dp[i]);
	}

	cout<<tmp;
	return 0;
}
