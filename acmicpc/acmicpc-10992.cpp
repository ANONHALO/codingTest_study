#include <iostream>

using namespace std;

int main (void){
	int n;
	cin>>n;
	char tmp='*';
	for (int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--) cout<<' ';
		
		for(int k=0;k<i*2-1;k++) {
			if((k!=0&&k!=i*2-2)&&i!=n) tmp=' ';
			cout<<tmp;
			tmp='*';
		}
		cout<<'\n';
	}

	return 0;
}
