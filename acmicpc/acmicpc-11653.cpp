#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	cin>>n;
	vector <bool> prime(n+1,0);
	vector <int> result;
	prime[0]=1;
	prime[1]=1;
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			for(int j=2;i*j<=n;j++){
				prime[i*j]=1;
			}
		}
	}

	int k=2;

	while(n!=1){
		if(n%k==0) {
			n/=k;		
			result.push_back(k);
		}else{
			while(true){
			 	k++;
				if(prime[k]==false) break;
			}
		}

	}

	for(int i=0;i<result.size();i++){
		cout<<result[i]<<'\n';

	}

	return 0;
}
