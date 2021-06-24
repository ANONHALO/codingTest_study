#include <iostream>
#include <vector>

using namespace std;
int n,s;
int count=0;
int sum=0;
void f(int num,int i_now, vector <int> &input){
	if(num==0){
		if(sum==s) count++;
		return;
	}

	for(int i=i_now;i<n;i++){
		sum+=input[i];
		f(num-1,i+1,input);
		sum-=input[i];
	}

	return;

}

int main(void){
	cin>>n>>s;
	vector <int> input(n);
	for(int i=0;i<n;i++) cin>>input[i];

	for(int i=1;i<=n;i++){
		f(i,0,input);
	}

	cout<<count;
	return 0;
}
