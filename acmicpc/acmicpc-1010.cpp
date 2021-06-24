#include <iostream>
using namespace std;
int arr[31][31]={0,};


int comb(int m,int n){
	if(m==n||n==0) return 1;
	if(arr[m][n]!=0) return arr[m][n];

	arr[m][n]=comb(m-1,n-1)+comb(m-1,n);
	return arr[m][n];
}

int main(void){
	
	arr[1][0]=1;
	arr[1][1]=1;
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>m;
		cout<<comb(m,n)<<'\n';
	}
	return 0;
}
