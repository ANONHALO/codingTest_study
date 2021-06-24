#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

stack <int> st;
queue <int> q;

void bfs(vector <vector <int>> &gph, vector <bool> &visited, int v){
	q.push(v);
	visited[v]=1;
	vector <int> tmp;
	int v_var;
	while(!q.empty()){
		v_var=q.front();
		q.pop();		
		cout<<v_var<<' ';
		for(int i=0;i<gph[v_var].size();i++){
			if(!visited[gph[v_var][i]]){
				tmp.push_back(gph[v_var][i]);
				visited[gph[v_var][i]]=1;
			}				
		}
		if(tmp.size()!=0){
			sort(tmp.begin(),tmp.end());
			for(int i=0;i<tmp.size();i++){
				q.push(tmp[i]);
			}
			tmp.clear();
		}
	}
	cout<<'\n';
	return;
}
void dfs(vector <vector <int>> &gph, vector <bool> &visited, int v){

	st.push(v);
	int v_var,flag=0;
	vector <int> tmp;
	while(!st.empty()){
		v_var=st.top();
		if(!visited[v_var]){
			visited[v_var]=1;
			cout<<v_var<<' ';
		}
		for(int i=0;i<gph[v_var].size();i++){
			if(!visited[gph[v_var][i]]){
				tmp.push_back(gph[v_var][i]);
				flag=1;
			}
		}
		if(tmp.size()!=0){
			sort(tmp.begin(),tmp.end());
			st.push(tmp[0]);
			tmp.clear();
		}
		if(flag){
			flag=0;
			continue;
		}
		st.pop();
		

	}
	cout<<'\n';
	return;
}


int main(void){
	int n_v,n_e;
	int u,v;
	int first;
	cin>>n_v>>n_e>>first;
	vector <vector <int>> gph(n_v+1);
	vector <bool> visited(n_v+1,false);

	for(int i=1;i<=n_e;i++){
		cin>>u>>v;
		gph[u].push_back(v);
		gph[v].push_back(u);
	}
	
	dfs(gph,visited,first);
	fill_n(visited.begin(),visited.size(),0);
	bfs(gph,visited,first);
	return 0;
}


