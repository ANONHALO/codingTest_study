#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector <int> output;
bool check[8]={0};
void nm(int m_arg,vector <int> &input){
	if(m_arg==m){
		for(int i=0;i<output.size();i++) cout<<output[i]<<' ';
		cout<<'\n';
		return;
	}
	int tmp=0;
	for(int i=0;i<n;i++){
		if(check[i]) continue;
		if(tmp==input[i]) continue;
		tmp=input[i];
		output.push_back(input[i]);
		check[i]=1;
		nm(m_arg+1,input);
		output.pop_back();
		check[i]=0;
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
