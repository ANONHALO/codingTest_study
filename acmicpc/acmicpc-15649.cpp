#include <iostream>
#include <vector>
using namespace std;
bool choosed[9]={0};

void print_nm(int n,int m,vector <int> &output){
	if(m==0){
		for(int i=0;i<output.size();i++){
			cout<<output[i]<<' ';
		}	
		cout<<'\n'; 
		return;
	}
	for(int i=1;i<=n;i++){
		if(choosed[i]==0) {
			choosed[i]=1;
			output.push_back(i);
			print_nm(n,m-1,output);
			choosed[i]=0;	
			output.pop_back();
		}

	}
	
	return;

}

int main(void){
	int n,m;
	vector <int> output;
	cin>>n>>m;
	print_nm(n,m, output);
	return 0;
}
