#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int t,n;
	int a_tmp,b_tmp,tmp;
	vector <int> input;
	long long sum=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>tmp;
			input.push_back(tmp);
		}

		for(int k=0;k<n-1;k++){
			for(int l=k+1;l<n;l++){
				a_tmp=input[k];
				b_tmp=input[l];
				if(a_tmp<b_tmp) swap(a_tmp,b_tmp);
				while(b_tmp!=0){
					tmp=a_tmp%b_tmp;
					a_tmp=b_tmp;
					b_tmp=tmp;
				}
				sum+=a_tmp;
			}


		}

		cout<<sum<<'\n';
		sum=0;
		input.clear();

	}
	return 0;
}
