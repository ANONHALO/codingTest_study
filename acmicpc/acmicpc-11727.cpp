#include <iostream>
using namespace std;
int arr[1001]={0,1,3,};

int tiling(int n){
	if(n<=2) return arr[n];

	for(int i=3;i<=n;i++){
		arr[i]=(arr[i-1]+arr[i-2]*2)%10007;
	}

	return arr[n];
}


int main(void){
	int n;
	cin>>n;
	cout<<tiling(n);

	return 0;
}
