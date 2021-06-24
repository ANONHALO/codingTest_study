#include <iostream>
#include <vector>
using namespace std;

bool print_nm(int n,int m,vector <int> &output){
	if(m==0){
		for(int i=0;i<output.size();i++){
			cout<<output[i]<<' ';
		}	
		cout<<'\n'; 
		return true;
	}
	for(int i=1;i<=n;i++){
			output.push_back(i);
			print_nm(n,m-1,output);
			output.pop_back();
	}

	
	
	return false;

}

int main(void){
	int n,m;
	vector <int> output;
	cin>>n>>m;
	print_nm(n,m, output);
	return 0;
}
