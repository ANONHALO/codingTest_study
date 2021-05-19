#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main(void){
	int n;
	cin>>n;
	long long result=LLONG_MAX,now=LLONG_MIN;
	long long result_cnt=0,now_cnt=0;
	vector<long long> input(n);
//	vector<int> result(n);
	for(int i=0;i<n;i++){
		cin>>input[i];
	}

	sort(input.begin(),input.end());

	for(int i=0;i<n;i++){
		if(now!=input[i]) {
			if(result_cnt<now_cnt){
			       	result_cnt=now_cnt;
				result=now;
			} 
			else if(result_cnt==now_cnt){
				if(result<now) {
			     		result=now;
				}		
			}

			now=input[i];
			now_cnt=0;
		}
		now_cnt++;
	}
	
	

	cout<<result;

	return 0;
}
