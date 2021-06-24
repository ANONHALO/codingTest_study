#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	
	int n;
	int max_len=1;
	cin>>n;
	vector <pair<int,int>> input(n);
	vector <int> dp(n,1);
	for(int i=0;i<n;i++){
		cin>>input[i].first>>input[i].second;
	}

	sort(input.begin(),input.end());
	int tmp;
	for(int i=1;i<n;i++){
		tmp=0;
		for(int j=0;j<i;j++){
			if(input[i].second>input[j].second) tmp=max(tmp,dp[j]);		
		}
		dp[i]+=tmp;
		max_len=max(max_len,dp[i]);
	}

	cout<<n-max_len;

	
	return 0;
}
