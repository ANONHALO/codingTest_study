#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	cin>>n;
	vector<int>input(n);
	vector <int> dp1(n,1);
	vector <int> dp2(n,1);
	int result=1;

	for(int i=0;i<n;i++) {
		cin>>input[i];
	}
	int tmp;
	for(int i=1;i<n;i++){
		tmp=0;
		for(int j=0;j<i;j++){
			if(input[i]>input[j]) tmp=max(tmp,dp1[j]);		
		}
		dp1[i]+=tmp;
	}

	for(int i=n-2;i>=0;i--){
		tmp=0;
		for(int j=n-1;j>i;j--){
			if(input[i]>input[j]) tmp=max(tmp,dp2[j]);
		
		}
		dp2[i]+=tmp;
	}

	for(int i=0;i<n;i++){
		result=max(result,dp1[i]+dp2[i]-1);

	}
	cout<<result;


	return 0;
}
