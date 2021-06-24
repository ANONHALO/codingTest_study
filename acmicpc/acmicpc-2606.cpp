#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int count=0;
stack <int> st;
void dfs(vector <vector <int>>&gph,vector<bool>&check,int v){
		
	
	check[v]=1;
	for(int i=0;i<gph[v].size();i++){
		if(!check[v]){
			dfs(gph,check,gph[v][i]);	
			count++;
		}
	
	}
			
	return;

}


int main(void){
	int n_v,n_e;
	int from,to;
	st.push(1);
	cin>>n_v>>n_e;
	vector <vector <int>> gph(n_v+1);
	vector <bool> check(n_v+1,0);

	for(int i=0;i<n_e;i++){
		cin>>from>>to;
		gph[from].push_back(to);
		gph[to].push_back(from);
	}

	dfs(gph,check,1);
	cout<<count;

	return 0;
}
