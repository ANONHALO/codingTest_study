#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(void) {

	int n;
	long long tmp,sum=0;
	cin >> n;
	vector <long long> input;
	vector <long long> output;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp < 0) {
			if(input.back()>0){
			       	input.push_back(sum);
				input.push_back(tmp);
				sum=0;
			}
			else{
				input.push_back(tmp);
			}	
		}
		else {
			sum += tmp;
		}
	}
	input.push_back(sum);
	for(int i=0;i<input.size();i++) cout<<input[i];
//
//	tmp = input[0];
//	int i = 0;
//	while (i != input.size() - 1) {
//		tmp = max(tmp, input[i + 1]);
//		tmp = max(tmp, tmp + input[i + 1] + input[i + 2]);
//		tmp = max(tmp, input[i + 2]);
//		i += 2;
//	}
//	cout << tmp;
	
	return 0;
}
