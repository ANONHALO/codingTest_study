#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int dp[51][51][51]={0};

int w(int a,int b, int c){
	
	if(a<=0||b<=0||c<=0) return 1;
	if(dp[a][b][c]!=0) return dp[a][b][c];


	if(a>20||b>20||c>20) {
		dp[a][b][c]=w(20,20,20);
		return dp[a][b][c];
	}
	else if(a<b&&b<c){
		dp[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		return dp[a][b][c];
	}
	else {
		dp[a][b][c]=w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
		return dp[a][b][c];
	}


}


int main(void){

	int a,b,c;
	cin>>a>>b>>c;

	while(1){
		if(a==-1&&b==-1&&c==-1) break;
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
		cin>>a>>b>>c;
	}

	return 0;
}
