#include <iostream>
#include <vector>
using namespace std;

int input[1025][1025]={0};
int dp[1025][1025]={0};
int f_dp(int x1,int y1,int x2, int y2){
	
}


int main(void){
	int n,m;
	int x1,x2,y1,y2;
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>input[i][j];
		}
	}

	for(int i=0;i<m;i++){
		cin>>x1>>y1>>x2>>y2;
		cout<<f_dp(x1,y1,x2,y2)<<'\n';
	}

	return 0;
}
