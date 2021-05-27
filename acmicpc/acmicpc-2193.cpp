#include <iostream>

using namespace std;

long long arr[100]={0,1,1,};

int main(void){
	int n;
	cin>>n;
	

	if(n<=2) cout<<arr[n];
	else{
		for(int i=3;i<=n;i++){
			arr[i]=arr[i-1]+arr[i-2];
		}	

		cout<<arr[n];

	}	
	return 0;
}
