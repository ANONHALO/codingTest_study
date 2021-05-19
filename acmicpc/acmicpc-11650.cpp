#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//bool compare(pair<int,int> a, pair<int,int> b){
//	if(a.first<b.first) return true;
//	else if(a.first>b.first) return false;
//	else{
//		if(a.second<b.second) return true;
//		else return false;
//	}
//
//}


int main(void){
	
	int n;
	cin>>n;
	vector <pair<int, int>>input(n);
	for(int i=0;i<n;i++){
		cin>>input[i].first>>input[i].second;
	}
	
	sort(input.begin(),input.end());

	for(int i=0;i<input.size();i++){
		cout<< input[i].first<<' '<<input[i].second<<'\n';
	}

	return 0;
}
