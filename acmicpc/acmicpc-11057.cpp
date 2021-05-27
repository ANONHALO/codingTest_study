#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	int ret=0;
	cin>>n;
	
	vector <vector <int>> result(n,vector<int>(10,0));
	result[0]={1,1,1,1,1,1,1,1,1,1};
	
	for(int i=0;i<n;i++){
		result[i][0]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<10;j++){
			for(int k=0;k<=j;k++)
			result[i][j]+=result[i-1][k];
			result[i][j]%=10007;
		}
	}	
	
	for(int i=0;i<10;i++){
		ret+=result[n-1][i];
	}

	cout<<ret%10007;

	return 0;
}
