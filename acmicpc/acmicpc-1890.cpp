#include <iostream>
#include <vector>
using namespace std;

int arr[101][101]={0};
long long dp[101][101]={0};
int n;
void jump(int now_x,int now_y, long long dp_point){
	if(now_x>n||now_y>n) return;

	dp[now_x][now_y]+=dp_point;

	if(arr[now_x][now_y]==0) return;
	jump(now_x+arr[now_x][now_y],now_y,dp[now_x][now_y]);
	jump(now_x,now_y+arr[now_x][now_y],dp[now_x][now_y]);
	return;
}


int main(void){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	int now_x=1,now_y=1;
	
	jump(now_x,now_y,1);

	cout<<dp[n][n];


	return 0;
}
