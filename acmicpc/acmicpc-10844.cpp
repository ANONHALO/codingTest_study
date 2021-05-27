#include <iostream>
using namespace std;

long long arr[101][10]={{0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1},};

int main(void){
	int mod=1000000000;
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			if(j==0) arr[i][j]=arr[i-1][j+1]%mod; 
			else if(j==9) arr[i][j]=arr[i-1][j-1]%mod;
			else  arr[i][j]=(arr[i-1][j-1]+arr[i-1][j+1])%mod;
		}

	}

	long long sum=0;
	for(int i=0;i<10;i++){
		sum+=arr[n][i];
	}
	cout<<sum;
	
	return 0;
}
