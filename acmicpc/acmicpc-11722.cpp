#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int n;
	cin>>n;
	vector <int> input(n);
	vector <int> dp(n,1);
	int tmp, result=1;

	for(int i=0;i<n;i++) cin>>input[i];

	for(int i=0;i<n;i++){
		tmp=0;
		for(int j=0;j<i;j++){
			if(input[i]<input[j]){
				tmp=max(tmp,dp[j]);
			}
		}
		dp[i]+=tmp;
		result=max(result,dp[i]);
	}
	cout<<result;

	return 0;

}
