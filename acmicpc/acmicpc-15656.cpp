#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector <int> output;
void nm(int m_arg,vector <int> &input){
	if(m_arg==m){
		for(int i=0;i<output.size();i++) cout<<output[i]<<' ';
		cout<<'\n';
		return;
	}
	for(int i=0;i<n;i++){
		output.push_back(input[i]);
		nm(m_arg+1,input);
		output.pop_back();
	}
	return;
}

int main(void){
	cin>>n>>m;
	vector <int> input(n);
	for(int i=0;i<n;i++) cin>>input[i];
	sort(input.begin(),input.end());

	nm(0,input);

	return 0;
}
