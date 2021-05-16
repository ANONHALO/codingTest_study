#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){

	int n,k;
	int tmp;
	vector<int> input;

	cin>>n>>k;

	for(int i=0;i<n;i++){
		cin>>tmp;
		input.push_back(tmp);
	}
	sort(input.begin(),input.end());

	cout<<input[k-1];
	return 0;
}
	
