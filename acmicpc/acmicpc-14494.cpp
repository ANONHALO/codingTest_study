#include <iostream>
using namespace std;

long long arr[1001][1001]={0};


int main(void){

	int n,m;
	arr[1][0]=0;
	for(int i=1;i<=1000;i++){
		arr[1][i]=1;
	}
	cin>>n>>m;	
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			arr[i][j]=(arr[i-1][j-1]+arr[i-1][j]+arr[i][j-1])%1000000007;
		}
	}

	cout<<arr[n][m]%1000000007;


	return 0;
}
