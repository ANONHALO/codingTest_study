#include <iostream>

using namespace std;

int arr[12]={0,1,2,4,};


int find(int n){
	if(n<=3) return arr[n];

	for(int i=4;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
	}
	return arr[n];
}

int main(void){

	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cout<<find(n)<<'\n';
	}
	return 0;

}
