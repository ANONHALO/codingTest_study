#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	
	int n;
	cin>>n;
	vector <pair<int, int>>input(n);
	for(int i=0;i<n;i++){
		cin>>input[i].second>>input[i].first;
	}
	
	sort(input.begin(),input.end());

	for(int i=0;i<input.size();i++){
		cout<< input[i].second<<' '<<input[i].first<<'\n';
	}

	return 0;
}
