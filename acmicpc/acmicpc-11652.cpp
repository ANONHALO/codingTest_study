#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main(void){
	int n;
	cin>>n;
	vector<long long> input(n);
	for(int i=0;i<n;i++){
		cin>>input[i];
	}

	sort(input.begin(),input.end());
	
	long long now=input[0];
	long long result=LLONG_MIN;
	int now_cnt=1;
	int result_cnt=0;
	for(int i=1;i<n;i++){
		if(now!=input[i]){
			if(result_cnt<now_cnt){
				result=now;
				result_cnt=now_cnt;
			
			}
			now=input[i];
			now_cnt=1;

		}
		else{
			now_cnt++;
		}

	}

	if(result_cnt<now_cnt){
		result=now;
		result_cnt=now_cnt;
	}
	

	cout<<result;

	return 0;
}
