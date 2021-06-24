#include <iostream>
#include <vector>
using namespace std;
bool choosed[9]={0};

bool print_nm(int now,int n,int m,vector <int> &output){
	if(m==0){
		for(int i=0;i<output.size();i++){
			cout<<output[i]<<' ';
		}	
		cout<<'\n'; 
		return true;
	}
	for(int i=now;i<=n;i++){
			output.push_back(i);
			print_nm(i+1,n,m-1,output);
			output.pop_back();
	}

	
	
	return false;

}

int main(void){
	int n,m;
	vector <int> output;
	cin>>n>>m;
	print_nm(1,n,m, output);
	return 0;
}
