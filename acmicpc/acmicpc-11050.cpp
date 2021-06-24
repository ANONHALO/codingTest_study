#include <iostream>

using namespace std;
int arr[11][11]={0};

int bino(int n,int k){
	if(n==k||k==0) return 1;
	if(arr[n][k]) return arr[n][k];

	return arr[n][k]=bino(n-1,k-1)+bino(n-1,k);

}

int main(void){
	
	int n,k;

	cin>>n>>k;
	cout<<bino(n,k);
	return 0;
}
